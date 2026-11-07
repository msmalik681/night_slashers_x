
void main(){
	void vSelf = getplayerproperty(0, "entity");
	int r = getentityproperty(vSelf, "rush_count");
	void vAniPos = getentityproperty(vSelf, "animpos");
	void vAniID = getentityproperty(vSelf,"animationID");
	void iUp = playerkeys(0, 0, "moveup");
	void iDown = playerkeys(0, 0, "movedown");
	void iLeft = playerkeys(0, 0, "moveleft");
	void iRight = playerkeys(0, 0, "moveright");
	void iAttack = playerkeys(0, 0, "attack");
	void vSelf2 = getplayerproperty(1, "entity");
	int r2 = getentityproperty(vSelf2, "rush_count");
	void vAniID2 = getentityproperty(vSelf2,"animationID");
	void vAniPos2 = getentityproperty(vSelf2, "animpos");
	void iUp2 = playerkeys(1, 0, "moveup");
	void iDown2 = playerkeys(1, 0, "movedown");
	void iLeft2 = playerkeys(1, 0, "moveleft");
	void iRight2 = playerkeys(1, 0, "moveright");
	void iAttack2 = playerkeys(1, 0, "attack");
	int time = openborvariant("elapsed_time");
	if (vAniID == openborconstant("ANI_RISE")){
		if (vAniPos == 0){
			if (iUp){ 
				changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL6")); 
			}else if (iDown){
				changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL5")); 
			}else if (iLeft){
				if (getentityproperty(vSelf,"direction"))
				{
					changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL7")); 
				}else{
					changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL8"));
				}
			}else if (iRight){
				if (getentityproperty(vSelf,"direction"))
				{
					changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL8")); 
				}else{
					changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL7")); 
				}
			}else if (iAttack){
				changeentityproperty(vSelf, "animation", openborconstant("ANI_FOLLOW10"));               
			}    
		}
	}
	if (vAniID2 == openborconstant("ANI_RISE")){
		if (vAniPos2 == 0){
			if (iUp2){
				changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL6")); 
			}else if (iDown2){
				changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL5")); 
			}else if (iLeft2){
				if (getentityproperty(vSelf2,"direction")){
					changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL7")); 
				}else{
					changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL8"));
				}
			}else if (iRight2){
				if (getentityproperty(vSelf2,"direction")){
					changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL8")); 
				}else{
					changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL7")); 
				}
			}else if (iAttack2){
				changeentityproperty(vSelf2, "animation", openborconstant("ANI_FOLLOW10"));
			}
		}
	}
	if (vAniID == openborconstant("ANI_FOLLOW4")){
		drawstring(21, 60, 4, "Counter");
	}if (vAniID == openborconstant("ANI_FREESPECIAL39")){
		drawstring(21, 60, 4, "Recover");
	}if (vAniID2 == openborconstant("ANI_FOLLOW4")){
		drawstring(255, 60, 4, "Counter");
	}if (vAniID2 == openborconstant("ANI_FREESPECIAL39")){
		drawstring(255, 60, 4, "Recover");
	}if (vAniID == openborconstant("ANI_FOLLOW10")){
		drawstring(21, 60, 4, "SlashBack");
	}if (vAniID2 == openborconstant("ANI_FOLLOW10")){
		drawstring(225, 60, 4, "SlashBack");
	}if(r >= 4  && r <= 5){
		drawstring(21, 60, 3, "good");
		drawstring(21, 80, 1, "Bonus_"+25*r);
	}if(r >= 6 && r <= 7){
		drawstring(21, 60, 3, "great");
		drawstring(21, 80, 1, "Bonus_"+25*r);
	}if(r == 8 && r <= 9){
		drawstring(21, 60, 3, "super");
		drawstring(21, 80, 1, "Bonus_"+25*r);
	}if(r >= 10 && r <= 14){
		drawstring(21, 60, 4, "killer");
		drawstring(21, 80, 1, "Bonus_"+50*r);
	}if(r >= 15 && r <= 19){
		drawstring(21, 60, 4, "butcher");
		drawstring(21, 80, 1, "Bonus_"+50*r);
	}if(r >= 20){
		drawstring(21, 60, 4, "Slasher");
		drawstring(21, 80, 1, "Bonus_"+75*r);
	}if(r2 >= 4 && r2 <= 5){
		drawstring(255, 60, 3, "good");
		drawstring(255, 80, 1, "Bonus_"+25*r2);
	}if(r2 >= 6 && r2 <= 7){
		drawstring(255, 60, 3, "great");
		drawstring(255, 80, 1, "Bonus_"+25*r2);
	}if(r2 >= 8 && r2 <= 9){
		drawstring(255, 60, 3, "super");
		drawstring(255, 80, 1, "Bonus_"+25*r2);
	}if(r2 >= 10 && r <= 14){
		drawstring(255, 60, 4, "killer");
		drawstring(250, 80, 1, "Bonus_"+50*r2);
	}if(r2 >= 15 && r <= 19){
		drawstring(255, 60, 4, "butcher");
		drawstring(250, 80, 1, "Bonus_"+50*r2);
	}if(r2 >= 20){
		drawstring(255, 60, 4, "slasher");
		drawstring(250, 80, 1, "Bonus_"+75*r2);
	}if (vSelf == NULL() && vSelf2 == NULL()){
		if (getglobalvar("crd") >= 1 || getglobalvar("crd2") >= 1){
			drawstring(125, 100, 4, "continue");
		if (time >= getglobalvar("elapsed_time") + 600 && time <= getglobalvar("elapsed_time") + 999){
			drawstring(155, 120, 3, "9");
		}if (time >= getglobalvar("elapsed_time") + 1000 && time <= getglobalvar("elapsed_time") + 1399){
			drawstring(155, 120, 3, "8");
		}if (time >= getglobalvar("elapsed_time") + 1400 && time <= getglobalvar("elapsed_time") + 1799){
			drawstring(155, 120, 3, "7");
		}if (time >= getglobalvar("elapsed_time") + 1800 && time <= getglobalvar("elapsed_time") + 2099){
			drawstring(155, 120, 3, "6");
		}if (time >= getglobalvar("elapsed_time") + 2100 && time <= getglobalvar("elapsed_time") + 2399){
			drawstring(155, 120, 3, "5");
		}if (time >= getglobalvar("elapsed_time") + 2400 && time <= getglobalvar("elapsed_time") + 2699){
			drawstring(155, 120, 3, "4");
		}if (time >= getglobalvar("elapsed_time") + 2700 && time <= getglobalvar("elapsed_time") + 2999){
			drawstring(155, 120, 4, "3");
		}if (time >= getglobalvar("elapsed_time") + 3000 && time <= getglobalvar("elapsed_time") + 3299){
			drawstring(155, 120, 4, "2");
		}if (time >= getglobalvar("elapsed_time") + 3300 && time <= getglobalvar("elapsed_time") + 3599){
			drawstring(155, 120, 4, "1");
		}if (time >= getglobalvar("elapsed_time") + 3600){
			drawstring(155, 120, 4, "0");
		}if (time >= getglobalvar("elapsed_time") + 4200){
			jumptobranch("end", 1);
		}
	}
	}
}
