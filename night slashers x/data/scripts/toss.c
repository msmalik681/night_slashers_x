void toss(void Bomb, float dx, float dy, float dz){ 
void self = getlocalvar("self");
int Direction = getentityproperty(self, "direction");
int x = getentityproperty(self, "x");
int y = getentityproperty(self, "a");
int z = getentityproperty(self, "z");
if (Direction == 0){                
dx = -dx; 
}projectile(Bomb, x+dx, z+dz, y+dy, Direction, 0, 1, 0);
}
