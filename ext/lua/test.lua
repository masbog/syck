
require "lunit"

lunit.import "all"

assert(loadlib("./lsyck.so", "luaopen_syck"))()

local testcase = lunit.TestCase("LuaYAML Testcases")

function testcase.test_load()
	assert_error(function() syck.load() end)
	assert_nil(syck.load("--- "))
	assert_true(syck.load("--- true"))
	assert_false(syck.load("--- false"))
	assert_equal(10, syck.load("--- 10"))
	local t = syck.load("--- \n- 5\n- 10\n- 15")
	assert_equal(5, t[1])
	assert_equal(10, t[2])
	assert_equal(15, t[3])
	local t = syck.load("--- \n- one\n- two\n- three")
	assert_equal("one", t[1])
	assert_equal("two", t[2])
	assert_equal("three", t[3])
	local t = syck.load("--- \nthree: 15\ntwo: 10\none: 5")
	assert_equal(5, t.one)
	assert_equal(10, t.two)
	assert_equal(15, t.three)
	local t = syck.load("--- \nints: \n  - 1\n  - 2\n  - 3\nmaps: \n  three: 3\n  two: 2\n  one: 1\nstrings: \n  - one\n  - two\n  - three")
	assert_equal(1, t.ints[1])
	assert_equal(2, t.ints[2])
	assert_equal(3, t.ints[3])
	assert_equal(1, t.maps.one)
	assert_equal(2, t.maps.two)
	assert_equal(3, t.maps.three)
	assert_equal("one", t.strings[1])
	assert_equal("two", t.strings[2])
	assert_equal("three", t.strings[3])
end

function testcase.test_dump()
	assert_equal("--- \n", syck.dump(nil))
	assert_equal("--- hey\n", syck.dump("hey"))
	assert_equal("--- 5\n", syck.dump(5))
	assert_equal("--- true\n", syck.dump(true))
	assert_equal("--- false\n", syck.dump(false))
	assert_equal("--- \n- 5\n- 6\n- 7\n", syck.dump({5, 6, 7}))

	local str = "--- \n- \n  - 1\n  - 2\n  - 3\n- \n  - 6\n  - 7\n  - 8\n"
	assert_equal(str, syck.dump({{1, 2, 3}, {6, 7, 8}}))
	local str = "--- \n- \n  - 1\n  - 2\n  - 3\n- \n  - one\n  - two\n  - three\n"
	assert_equal(str, syck.dump({{1, 2, 3}, {"one", "two", "three"}}))
end

os.exit(lunit.run())
