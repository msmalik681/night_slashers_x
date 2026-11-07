
void main(){
	int i, dx,dz; 
	void ent, parent;
	int ent_max = openborvariant("ent_max");
	for(i=0; i<ent_max; i++){
		ent = getentity(i);
		if(getentityproperty(ent, "exists")){
			parent = getentityproperty(ent, "parent");
			if(!parent || getentityproperty(parent, "type")!=openborconstant("TYPE_PLAYER")){
				if(getentityproperty(ent, "x")<-500) killentity(ent);
				if( getentityproperty(ent, "setlayer")<400
					&& getentityproperty(ent, "model")!="aramer"
					&& (getentityproperty(ent, "type")==openborconstant("TYPE_ENEMY") ||
					getentityproperty(ent, "type")==openborconstant("TYPE_PLAYER") ||
					getentityproperty(ent, "type")==openborconstant("TYPE_OBSTACLE") ||
					getentityproperty(ent, "type")==openborconstant("TYPE_NONE") ||
					getentityproperty(ent, "aiflag", "blink")==1 ||
					getentityproperty(ent, "setlayer")==5)
					//&& !(getentityproperty(ent, "type")==openborconstant("TYPE_PLAYER") &&(getentityproperty(ent, "animationid")==openborconstant("ANI_SPAWN") || getentityproperty(ent, "animationid")==openborconstant("ANI_RESPAWN")))
				){
					if(0==getentityproperty(ent, "base")){
						if( getentityproperty(ent, "a")<10 ){
							if(getentityproperty(ent, "health")>0) {damageentity(ent, ent, 10000, 1, openborconstant("ATK_NORMAL5")); }
							changeentityproperty(ent, "velocity", -3.5, 0, 0);
							changeentityproperty(ent, "subject_to_wall", 0);
							changeentityproperty(ent, "no_adjust_base", 1);
							changeentityproperty(ent, "subject_to_screen", 0);
							changeentityproperty(ent, "setlayer", -2);
							changeentityproperty(ent, "position", getentityproperty(ent, "x"), getentityproperty(ent, "z"), 0);
						}else if( getentityproperty(ent, "a")<50){
							bindentity(ent, NULL());
							if(getentityproperty(ent, "x")<290 && getentityproperty(ent, "x")>100){
								changeentityproperty(ent, "position", 290, getentityproperty(ent, "z"), getentityproperty(ent, "a"));
							}
						}
					}else if(getentityproperty(ent, "dead") && 0==checkwall(getentityproperty(ent, "x")+100, getentityproperty(ent, "z")) ){
							changeentityproperty(ent, "base", 0);
							changeentityproperty(ent, "no_adjust_base", 1);
					}
				}
			}
		}
	}
	
}