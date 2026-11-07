void shoot(void Shot, float dx, float dy, float dz){
	void self = getlocalvar("self");
	int Direction = getentityproperty(self, "direction");
	int x = getentityproperty(self, "x");
	int y = getentityproperty(self, "a");
	int z = getentityproperty(self, "z");
	if (Direction == 0){
		dx = -dx;
	}projectile(Shot, x+dx, z+dz, y+dy, Direction, 0, 0, 0);
}void toss(void Bomb, float dx, float dy, float dz){
	void self = getlocalvar("self");
	int Direction = getentityproperty(self, "direction");
	int x = getentityproperty(self, "x");
	int y = getentityproperty(self, "a");
	int z = getentityproperty(self, "z");
	if (Direction == 0){
		dx = -dx; 
	}projectile(Bomb, x+dx, z+dz, y+dy, Direction, 0, 1, 0);
}void flipdir(){
	void self = getlocalvar("self");
	changeentityproperty(self, "direction", !getentityproperty(self, "direction"));
}void ani001(void vAni, int iFrame){
	void vSelf = getlocalvar("self"); 
	changeentityproperty(vSelf, "animation", openborconstant(vAni)); 
	changeentityproperty(vSelf, "animpos", iFrame); 
}void velo001(float fX, float fZ, float fY){
	void vSelf = getlocalvar("self");
	if (getentityproperty(vSelf, "direction")==0){
		fX = -fX; 
	}changeentityproperty(vSelf, "velocity", fX, fZ, fY); 
}void spawner(void vName, float fX, float fY, float fZ){
	void self = getlocalvar("self"); 
	void vSpawn; 
	int  iDirection = getentityproperty(self, "direction");
	clearspawnentry(); 
	setspawnentry("name", vName); 
	if (iDirection == 0){
		fX = -fX; 
	}fX = fX + getentityproperty(self, "x"); 
	fY = fY + getentityproperty(self, "a"); 
	fZ = fZ + getentityproperty(self, "z"); 
	vSpawn = spawn(); 
	changeentityproperty(vSpawn, "position", fX, fZ, fY); 
	changeentityproperty(vSpawn, "parent", self);
	changeentityproperty(vSpawn, "direction", iDirection);
	return vSpawn; 
}void keyint(void Ani, int Frame, void Key, int Hflag, int Limit){
	void self = getlocalvar("self");
	void Health = getentityproperty(self,"health");
	int iPIndex = getentityproperty(self,"playerindex");
	void iRKey;
	if (Key=="BA"){
		iRKey = playerkeys(iPIndex, 0, "moveleft", "attack");
	}if (Key=="A"){
		iRKey = playerkeys(iPIndex, 0, "attack");
	}if (Hflag==1){ 
		iRKey = !iRKey; 
	}if ((Health < Limit)&&iRKey){
		changeentityproperty(self, "animation", openborconstant(Ani));
		changeentityproperty(self, "animpos", Frame);
	}
}void clearL(){
	clearlocalvar();
}
