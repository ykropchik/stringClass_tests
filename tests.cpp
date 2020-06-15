/*============================*/
{
	MyString str = "abc";
	assert(str.Find("a") == 0);
}
/*============================*/
{
	MyString str = "abc";
	assert(str.Length() == 3);
	str = str + "cd";
	assert(str == "abccd");   // Требуется перегруженный оператор ==
	assert(str.Length() == 5);
	str = "mv" + str;
	assert(str == "mvabccd");   // Требуется перегруженный оператор ==
	assert(str.Length() == 7);

}
/*============================*/