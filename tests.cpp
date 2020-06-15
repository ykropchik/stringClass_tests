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
    FLString flstring;
    flstring = "abcdeftre";
    findAndReplace(flstring, FLString("abc"), FLString("abcabc"));
    XCTAssert(flstring == FLString("abcabcdeftre"));
    
    findAndReplace(flstring, "tre", "xxx");
    cout << flstring << endl;
    XCTAssert(flstring == "abcabcdefxxx");
}
/*============================*/
{
    for (int i = 1; i < 16; i++) {
        FLString flstring = FLString(i);
        flstring = "abcdeftre";
        
        findAndReplace(flstring, FLString("abc"), FLString("abcabc"));
        XCTAssert(flstring == FLString("abcabcdeftre"));
        
        findAndReplace(flstring, FLString("tre"), FLString("xxx"));
        cout << flstring << endl;
        XCTAssert(flstring == FLString("abcabcdefxxx"));
    }
}
/*============================*/
{
    FLString flstring;
    flstring = "abcdeftre";
    findAndReplace(flstring, FLString("abcdeftre"), FLString(""));
    XCTAssert(flstring == FLString(""));
}
/*============================*/
{
    FLString flstring;
    flstring = "abcdeftre";
    
    while (flstring.getLength() != 0) {
        char & charToRemove = flstring[(int)flstring.getLength() - 1];
        findAndReplace(flstring, FLString(&charToRemove) , FLString(""));
    }
    
    XCTAssert(flstring == FLString(""));
    
}
/*============================*/
{
    FLString flstring;
    flstring = "abcdeftre";
    
    findAndReplace(flstring, FLString("abc"), FLString("ab"));
    XCTAssert(flstring == FLString("abdeftre"));
    findAndReplace(flstring, FLString("abd"), FLString("bd"));
    XCTAssert(flstring == FLString("bdeftre"));
    findAndReplace(flstring, FLString("eft"), FLString("f"));
    XCTAssert(flstring == FLString("bdfre"));
}
/*============================*/
{
    FLString flstring;
    flstring = "abcdeftre";
    
    findAndReplace(flstring, FLString("iuofhjwe89"), FLString("xxx"));
    XCTAssert(flstring == FLString("abcdeftre"));
}
/*============================*/
{
    FLString flstring;
    flstring = "abcdeftre";
    
    findAndReplace(flstring, FLString("abcdeftre"), FLString("abcdeftreabcdeftre"));
    cout << flstring << endl;
    XCTAssert(flstring == FLString("abcdeftreabcdeftre"));
}
/*============================*/
{
    FLString flstring = FLString(4);
    FLString flstring1 = FLString(7);
    flstring1= flstring = "";
    cout <<"0"<< flstring << endl;
    
    findAndReplace(flstring, "abc", "abcabc");
    cout << flstring << endl;
    
    // flstring = flstring+"___"+flstring+"------";
    cout <<"1"<< flstring << endl;
    
    findAndReplace(flstring,"", "");
    cout <<"2"<< flstring << endl;
}
/*============================*/
	MyString myStr1 = "0123";
    	MyString myStr2 = "456789";

    	MyString myStr3 ="0123"+ myStr1 + myStr2+"0123";
    	std::cout << myStr3;
}
/*============================*/
