bool checksequenece(char large[] , char*small) {
if(small[0]=='\0')
{
    return true;
}

else if(large[0]==small[0])
{
    return checksequence(large+1,small+1);

}

else{
    return checksequence(large+1,small);
}

return false;

}
