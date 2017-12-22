require("lua_res1.printTable")

print(1);
local tab = {}
printTable(tab)

print(12345678)
names = {"Peter", "Paul", "Mary"}
grades = {Mary = 10, Paul = 7, Peter = 8}
table.sort(names, function (n1, n2)
return grades[n1] > grades[n2] -- compare the grades
end)
printTable(names)











