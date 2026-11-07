void main(){
void vSelf = getplayerproperty(0, "entity");
void vSelf2 = getplayerproperty(1, "entity");  
int  iScore = getplayerproperty(vSelf, "score", 0 + getglobalvar("score"));
int  iScore2 = getplayerproperty(vSelf2, "score", 0 + getglobalvar("score"));
int  r = getentityproperty(vSelf, "rush_count");
int  r2 = getentityproperty(vSelf2, "rush_count");
if(r >= 4 && r <= 9){
changeplayerproperty(0, "score", iScore + 25*r);
}if(r >= 10 && r <= 19){
changeplayerproperty(0, "score", iScore + 50*r);
}if(r >= 20){
changeplayerproperty(0, "score", iScore + 75*r);
}if(r2 >= 4 && r2 <=9){
changeplayerproperty(1, "score", iScore2 + 25*r2);
}if(r2 == 10 && r2 <= 19){
changeplayerproperty(1, "score", iScore2 + 50*r2);
}if(r2 >= 20){
changeplayerproperty(1, "score", iScore2 + 75*r2);
}
}
