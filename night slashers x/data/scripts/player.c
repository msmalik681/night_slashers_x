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
}void ani002(void vAni, int iFrame){
	void vSelf = getlocalvar("self");
	void vTarget = getentityproperty(vSelf, "opponent");
	changeentityproperty(vTarget, "animation", openborconstant(vAni));
	changeentityproperty(vTarget, "animpos", iFrame);
}void anti(){
	void self = getlocalvar("self");
	void target = getlocalvar("Target" + self);
	if(target==NULL()){
		changeentityproperty(target, "attacking", 0);
		target = getentityproperty(self, "grabbing");
		setlocalvar("Target" + self, target);
	}if(target!=NULL()){
		changeentityproperty(target, "attacking", 1);
		tossentity(target, 0, 0, 0);
	}
}void hurt(int Damage, int AtNumber){
	void self = getlocalvar("self");
	void target = getlocalvar("Target" + self);
	if(target==NULL()){
		target = getentityproperty(self, "grabbing");
		setlocalvar("Target" + self, target);
	}if(target!=NULL()){
		if(AtNumber==1){
			damageentity(target, self, Damage, 1, openborconstant("ATK_NORMAL"));
		}if(AtNumber==7){
			damageentity(target, self, Damage, 1, openborconstant("ATK_NORMAL7"));
		}if(AtNumber==8){
			damageentity(target, self, Damage, 1, openborconstant("ATK_NORMAL8"));
		}
	}
}void finish(int Damage, int Type, int x, int y, int z, int Face){
	void self = getlocalvar("self");
	void target = getlocalvar("Target" + self);
	int SDir = getentityproperty(target,"direction");
	int MDir;
	if(Face==0){
		MDir = SDir;
	}if(Face==1){
		if(SDir==0){
			MDir = 1;
		} else { MDir = 0;}
	}if(target==NULL()){
		target = getentityproperty(self, "grabbing");
		setlocalvar("Target" + self, target);
	}if(target!=NULL()){
		int dir = getentityproperty(target,"direction");
		if(dir==0){
			x = -x;
		}if(Type==1){
			damageentity(target, self, Damage, 1, openborconstant("ATK_NORMAL"));
		}if(Type==2){
			damageentity(target, self, Damage, 1, openborconstant("ATK_NORMAL2"));
		}if(Type==3){
			damageentity(target, self, Damage, 1, openborconstant("ATK_NORMAL3"));
		}tossentity(target, y, x, z);
		changeentityproperty(target, "direction", MDir);
	}
}void clearL(){
	clearlocalvar();
}void position(int Frame, float dx, float dy, float dz, int face){
	void self = getlocalvar("self");
	void target = getlocalvar("Target" + self);
	if(target==NULL()){
		target = getentityproperty(self, "grabbing");
		setlocalvar("Target" + self, target);
	}if(target!=NULL()){
		updateframe(target, Frame);
		bindentity(target, self, dx, dz, dy, face, 0);
	}
}void depost(int Gr){
	void self = getlocalvar("self");
	void target = getlocalvar("Target" + self);
	if(target==NULL()){
		target = getentityproperty(self, "grabbing");
		setlocalvar("Target" + self, target);
	}if(target!=NULL()){
		bindentity(target, NULL());
		if(Gr == 1){
			int x = getentityproperty(target, "x");
			int z = getentityproperty(target, "z");
			changeentityproperty(target, "position", x, z, 0);
		}
	}
}void velo001(float fX, float fZ, float fY){
	void vSelf = getlocalvar("self");
	if (getentityproperty(vSelf, "direction")==0){
		fX = -fX;
	}changeentityproperty(vSelf, "velocity", fX, fZ, fY);
}void throw(int Damage, int Type, int x, int y, int z, int Face){
	void self = getlocalvar("self");
	void target = getlocalvar("Target" + self);
	int SDir = getentityproperty(target,"direction");
	int MDir;
	if(Face==0){
		MDir = SDir;
	}if(Face==1){
		if(SDir==0){
			MDir = 1;
		}else { MDir = 0;}
	}if(target==NULL()){
		target = getentityproperty(self, "grabbing");
		setlocalvar("Target" + self, target);
	}if(target!=NULL()){
		int dir = getentityproperty(target,"direction");
		if(dir==0){
			x = -x;
		}if(Type==1){
			damageentity(target, self, 0, 1, openborconstant("ATK_NORMAL"));
		}if(Type==2){
			damageentity(target, self, 0, 1, openborconstant("ATK_NORMAL9"));
		}if(Type==3){
			damageentity(target, self, 0, 1, openborconstant("ATK_NORMAL2"));
		}
		changeentityproperty(target, "attacking", 1);
		changeentityproperty(target, "damage_on_landing", Damage);
		changeentityproperty(target, "projectile", 1);
		changeentityproperty(target, "direction", MDir);
		tossentity(target, y, x, z);
	}
}void spawner(void vName, float fX, float fY, float fZ){
	void self = getlocalvar("self");
	void vSpawn;
	int  iDirection = getentityproperty(self, "direction");
	clearspawnentry();
	setspawnentry("name", vName);
	if (iDirection == 0){
		fX = -fX;
	}
	fX = fX + getentityproperty(self, "x");
	fY = fY + getentityproperty(self, "a");
	fZ = fZ + getentityproperty(self, "z");
	vSpawn = spawn();
	changeentityproperty(vSpawn, "position", fX, fZ, fY);
	changeentityproperty(vSpawn, "parent", self);
	changeentityproperty(vSpawn, "direction", iDirection);
	return vSpawn;
}void norun(){
	void self = getlocalvar("self");
	changeentityproperty(self, "aiflag", "running", 0);
}void keyint(void Ani, int Frame, void Key, int Hflag, int Limit){
	void self = getlocalvar("self");
	void Health = getentityproperty(self,"health");
	int iPIndex = getentityproperty(self,"playerindex");
	void iRKey;
	if (Key=="U"){
		iRKey = playerkeys(iPIndex, 0, "moveup");
	}if (Key=="D"){
		iRKey = playerkeys(iPIndex, 0, "movedown");
	}if (Key=="F"){
		if (getentityproperty(self,"direction")){
			iRKey = playerkeys(iPIndex, 0, "moveright");
		}else{
			iRKey = playerkeys(iPIndex, 0, "moveleft");
		}
	}if (Key=="B"){
		if (getentityproperty(self,"direction")){
			iRKey = playerkeys(iPIndex, 0, "moveleft");
		}else{
			iRKey = playerkeys(iPIndex, 0, "moveright");
		}
	}if (Key=="J"){
		iRKey = playerkeys(iPIndex, 0, "jump");
	}if (Key=="A"){
		iRKey = playerkeys(iPIndex, 0, "attack");
	}if (Key=="A2"){
		iRKey = playerkeys(iPIndex, 0, "attack2");
	}if (Key=="S"){
		iRKey = playerkeys(iPIndex, 0, "special");
	}if (Key=="UA"){
		iRKey = playerkeys(iPIndex, 0, "moveup", "attack");
	}if (Key=="BA"){
		iRKey = playerkeys(iPIndex, 0, "moveleft", "attack");
	}if (Key=="DA"){
		iRKey = playerkeys(iPIndex, 0, "movedown", "attack");
	}if (Key=="SD"){
		iRKey = playerkeys(iPIndex, 0, "special", "movedown");
	}if (Key=="SB"){
		if (getentityproperty(self,"direction")){
			iRKey = playerkeys(iPIndex, 0, "moveleft", "special");
		}else{
			iRKey = playerkeys(iPIndex, 0, "moveright", "special");
		}
	}if (Key=="DJ"){
		iRKey = playerkeys(iPIndex, 0, "movedown", "jump");
	}if (Key=="UJ"){
		iRKey = playerkeys(iPIndex, 0, "moveup", "jump");
	}if (Key=="FJ"){
		if (getentityproperty(self,"direction")){
			iRKey = playerkeys(iPIndex, 0, "moveright", "jump");
		}else{
			iRKey = playerkeys(iPIndex, 0, "moveleft", "jump");
		}
	}if (Key=="BJ"){
		if (getentityproperty(self,"direction")){
			iRKey = playerkeys(iPIndex, 0, "moveleft", "jump");
		}else{
			iRKey = playerkeys(iPIndex, 0, "moveright", "jump");
		}
	}if (Hflag==1){
		iRKey = !iRKey;
	}if ((Health < Limit)&&iRKey){
		changeentityproperty(self, "animation", openborconstant(Ani));
		changeentityproperty(self, "animpos", Frame);
	}
}void keycheck(){
	void self = getlocalvar("self");
	int player = getentityproperty(self, "playerindex");
	float xdir = 0;
	float zdir = 0;
	float speed = 0.7;
	if(playerkeys(0, 0, "moveleft"))
	xdir = -speed;
	else if(playerkeys(0, 0, "moveright"))
	xdir = speed;
	if(playerkeys(0, 0, "moveup"))
	zdir = -speed/2.0;
	else if(playerkeys(0, 0, "movedown"))
	zdir = speed/2.0;
	changeentityproperty(self, "velocity", xdir, zdir, 0);
}void aiflag(int flag, int on, int action){
	void vSelf = getlocalvar("self");
	changeentityproperty(vSelf, "aiflag", flag, on);
	changeentityproperty(vSelf, "takeaction", action);
}void keymove(float V){
	void self = getlocalvar("self");
	int iPIndex = getentityproperty(self,"playerindex");
	float xdir = 0;
	float zdir = 0;
	if (playerkeys(iPIndex, 0, "moveleft")){
		xdir = -V;
	} else if(playerkeys(iPIndex, 0, "moveright")){
		xdir = V;
	}if(playerkeys(iPIndex, 0, "moveup")){
		zdir = -V/2;
	}else if(playerkeys(iPIndex, 0, "movedown")){
		zdir = V/2;
	}
	changeentityproperty(self, "velocity", xdir, zdir);
}void thrdir(){
	void self = getlocalvar("self");
	int iPIndex = getentityproperty(self,"playerindex");
	void ileft = playerkeys(iPIndex, 0, "moveleft");
	void iright = playerkeys(iPIndex, 0, "moveright");
	if (ileft){
		changeentityproperty(self, "direction", 1);
	}if (iright){
		changeentityproperty(self, "direction", 0);
	}
}void recover(){
	void self = getlocalvar("self");
	int iPIndex = getentityproperty(self,"playerindex");
	void isDead = getentityproperty(self,"aiflag", "dead");
	void target = getentityproperty(self, "grabbing");
	void ijump = playerkeys(iPIndex, 0, "jump");
	if (!isDead  && ijump){
		changeentityproperty(self, "animation", openborconstant("ANI_FREESPECIAL39"));
	}
}
