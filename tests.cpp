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
{
    MyString flstring;
    flstring = "abcdeftre";
    Replace(flstring, MyString("abc"), MyString("abcabc"));
    XCTAssert(flstring == MyString("abcabcdeftre"));
    
    Replace(flstring, "tre", "xxx");
    cout << flstring << endl;
    XCTAssert(flstring == "abcabcdefxxx");
}
/*============================*/
{
    for (int i = 1; i < 16; i++) {
        MyString flstring = MyString(i);
        flstring = "abcdeftre";
        
        Replace(flstring, MyString("abc"), MyString("abcabc"));
        XCTAssert(flstring == MyString("abcabcdeftre"));
        
        Replace(flstring, MyString("tre"), MyString("xxx"));
        cout << flstring << endl;
        XCTAssert(flstring == MyString("abcabcdefxxx"));
    }
}
/*============================*/
{
    MyString flstring;
    flstring = "abcdeftre";
    Replace(flstring, MyString("abcdeftre"), MyString(""));
    XCTAssert(flstring == MyString(""));
}
/*============================*/
{
    MyString flstring;
    flstring = "abcdeftre";
    
    while (flstring.Length() != 0) {
        char & charToRemove = flstring[(int)flstring.Length() - 1];
        Replace(flstring, MyString(&charToRemove) , MyString(""));
    }
    
    XCTAssert(flstring == MyString(""));
    
}
/*============================*/
{
    MyString flstring;
    flstring = "abcdeftre";
    
    Replace(flstring, MyString("abc"), MyString("ab"));
    XCTAssert(flstring == MyString("abdeftre"));
    Replace(flstring, MyString("abd"), MyString("bd"));
    XCTAssert(flstring == MyString("bdeftre"));
    Replace(flstring, MyString("eft"), MyString("f"));
    XCTAssert(flstring == MyString("bdfre"));
}
/*============================*/
{
    FLString flstring;
    flstring = "abcdeftre";
    
    Replace(flstring, MyString("iuofhjwe89"), MyString("xxx"));
    XCTAssert(flstring == MyString("abcdeftre"));
}
/*============================*/
{
    MyString flstring;
    flstring = "abcdeftre";
    
    Replace(flstring, MyString("abcdeftre"), MyString("abcdeftreabcdeftre"));
    cout << flstring << endl;
    XCTAssert(flstring == MyString("abcdeftreabcdeftre"));
}
/*============================*/
{
    MyString flstring = MyString(4);
    MyString flstring1 = MyString(7);
    flstring1= flstring = "";
    cout <<"0"<< flstring << endl;
    
    Replace(flstring, "abc", "abcabc");
    cout << flstring << endl;
    
    // flstring = flstring+"___"+flstring+"------";
    cout <<"1"<< flstring << endl;
    
    Replace(flstring,"", "");
    cout <<"2"<< flstring << endl;
/*============================*/
}
	MyString myStr1 = "0123";
    	MyString myStr2 = "456789";

    	MyString myStr3 ="0123"+ myStr1 + myStr2+"0123";
    	std::cout << myStr3;
}
/*============================*/
/*===Тест для строк со статическим размером кластера===*/
}
	MyString myStr1 (2,"123 456");
	MyString myStr2 (1,"4576");
	MyString myStr3(5, "987654");
	myStr1 = myStr2 + myStr1;
	std::cout << myStr1 << std::endl;
	myStr1.Replace(myStr2, myStr3);
	std::cout << myStr1;
}
/*============================*/
