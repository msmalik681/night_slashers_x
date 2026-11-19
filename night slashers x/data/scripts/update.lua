local function __openbor_smart_truth(value)
	return value ~= nil and value ~= false and value ~= 0
end

function main()
	local vSelf = getplayerproperty(0, "entity")
	local r = getentityproperty(vSelf, "rush_count")
	local vAniPos = getentityproperty(vSelf, "animpos")
	local vAniID = getentityproperty(vSelf, "animationID")
	local iUp = playerkeys(0, 0, "moveup")
	local iDown = playerkeys(0, 0, "movedown")
	local iLeft = playerkeys(0, 0, "moveleft")
	local iRight = playerkeys(0, 0, "moveright")
	local iAttack = playerkeys(0, 0, "attack")
	local vSelf2 = getplayerproperty(1, "entity")
	local r2 = getentityproperty(vSelf2, "rush_count")
	local vAniID2 = getentityproperty(vSelf2, "animationID")
	local vAniPos2 = getentityproperty(vSelf2, "animpos")
	local iUp2 = playerkeys(1, 0, "moveup")
	local iDown2 = playerkeys(1, 0, "movedown")
	local iLeft2 = playerkeys(1, 0, "moveleft")
	local iRight2 = playerkeys(1, 0, "moveright")
	local iAttack2 = playerkeys(1, 0, "attack")
	local time = openborvariant("elapsed_time")
	if __openbor_smart_truth((vAniID == openborconstant("ANI_RISE"))) then
		do
			if __openbor_smart_truth((vAniPos == 0)) then
				do
					if __openbor_smart_truth(iUp) then
						do
							changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL6"))
						end
					else
						if __openbor_smart_truth(iDown) then
							do
								changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL5"))
							end
						else
							if __openbor_smart_truth(iLeft) then
								do
									if __openbor_smart_truth(getentityproperty(vSelf, "direction")) then
										do
											changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL7"))
										end
									else
										do
											changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL8"))
										end
									end
								end
							else
								if __openbor_smart_truth(iRight) then
									do
										if __openbor_smart_truth(getentityproperty(vSelf, "direction")) then
											do
												changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL8"))
											end
										else
											do
												changeentityproperty(vSelf, "animation", openborconstant("ANI_FREESPECIAL7"))
											end
										end
									end
								else
									if __openbor_smart_truth(iAttack) then
										do
											changeentityproperty(vSelf, "animation", openborconstant("ANI_FOLLOW10"))
										end
									end
								end
							end
						end
					end
				end
			end
		end
	end
	if __openbor_smart_truth((vAniID2 == openborconstant("ANI_RISE"))) then
		do
			if __openbor_smart_truth((vAniPos2 == 0)) then
				do
					if __openbor_smart_truth(iUp2) then
						do
							changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL6"))
						end
					else
						if __openbor_smart_truth(iDown2) then
							do
								changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL5"))
							end
						else
							if __openbor_smart_truth(iLeft2) then
								do
									if __openbor_smart_truth(getentityproperty(vSelf2, "direction")) then
										do
											changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL7"))
										end
									else
										do
											changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL8"))
										end
									end
								end
							else
								if __openbor_smart_truth(iRight2) then
									do
										if __openbor_smart_truth(getentityproperty(vSelf2, "direction")) then
											do
												changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL8"))
											end
										else
											do
												changeentityproperty(vSelf2, "animation", openborconstant("ANI_FREESPECIAL7"))
											end
										end
									end
								else
									if __openbor_smart_truth(iAttack2) then
										do
											changeentityproperty(vSelf2, "animation", openborconstant("ANI_FOLLOW10"))
										end
									end
								end
							end
						end
					end
				end
			end
		end
	end
	if __openbor_smart_truth((vAniID == openborconstant("ANI_FOLLOW4"))) then
		do
			drawstring(21, 60, 4, "Counter")
		end
	end
	if __openbor_smart_truth((vAniID == openborconstant("ANI_FREESPECIAL39"))) then
		do
			drawstring(21, 60, 4, "Recover")
		end
	end
	if __openbor_smart_truth((vAniID2 == openborconstant("ANI_FOLLOW4"))) then
		do
			drawstring(255, 60, 4, "Counter")
		end
	end
	if __openbor_smart_truth((vAniID2 == openborconstant("ANI_FREESPECIAL39"))) then
		do
			drawstring(255, 60, 4, "Recover")
		end
	end
	if __openbor_smart_truth((vAniID == openborconstant("ANI_FOLLOW10"))) then
		do
			drawstring(21, 60, 4, "SlashBack")
		end
	end
	if __openbor_smart_truth((vAniID2 == openborconstant("ANI_FOLLOW10"))) then
		do
			drawstring(225, 60, 4, "SlashBack")
		end
	end
	if __openbor_smart_truth(((r >= 4) and (r <= 5))) then
		do
			drawstring(21, 60, 3, "good")
			drawstring(21, 80, 1, ("Bonus_" + (25 * r)))
		end
	end
	if __openbor_smart_truth(((r >= 6) and (r <= 7))) then
		do
			drawstring(21, 60, 3, "great")
			drawstring(21, 80, 1, ("Bonus_" + (25 * r)))
		end
	end
	if __openbor_smart_truth(((r == 8) and (r <= 9))) then
		do
			drawstring(21, 60, 3, "super")
			drawstring(21, 80, 1, ("Bonus_" + (25 * r)))
		end
	end
	if __openbor_smart_truth(((r >= 10) and (r <= 14))) then
		do
			drawstring(21, 60, 4, "killer")
			drawstring(21, 80, 1, ("Bonus_" + (50 * r)))
		end
	end
	if __openbor_smart_truth(((r >= 15) and (r <= 19))) then
		do
			drawstring(21, 60, 4, "butcher")
			drawstring(21, 80, 1, ("Bonus_" + (50 * r)))
		end
	end
	if __openbor_smart_truth((r >= 20)) then
		do
			drawstring(21, 60, 4, "Slasher")
			drawstring(21, 80, 1, ("Bonus_" + (75 * r)))
		end
	end
	if __openbor_smart_truth(((r2 >= 4) and (r2 <= 5))) then
		do
			drawstring(255, 60, 3, "good")
			drawstring(255, 80, 1, ("Bonus_" + (25 * r2)))
		end
	end
	if __openbor_smart_truth(((r2 >= 6) and (r2 <= 7))) then
		do
			drawstring(255, 60, 3, "great")
			drawstring(255, 80, 1, ("Bonus_" + (25 * r2)))
		end
	end
	if __openbor_smart_truth(((r2 >= 8) and (r2 <= 9))) then
		do
			drawstring(255, 60, 3, "super")
			drawstring(255, 80, 1, ("Bonus_" + (25 * r2)))
		end
	end
	if __openbor_smart_truth(((r2 >= 10) and (r <= 14))) then
		do
			drawstring(255, 60, 4, "killer")
			drawstring(250, 80, 1, ("Bonus_" + (50 * r2)))
		end
	end
	if __openbor_smart_truth(((r2 >= 15) and (r <= 19))) then
		do
			drawstring(255, 60, 4, "butcher")
			drawstring(250, 80, 1, ("Bonus_" + (50 * r2)))
		end
	end
	if __openbor_smart_truth((r2 >= 20)) then
		do
			drawstring(255, 60, 4, "slasher")
			drawstring(250, 80, 1, ("Bonus_" + (75 * r2)))
		end
	end
	if __openbor_smart_truth(((vSelf == nil()) and (vSelf2 == nil()))) then
		do
			if __openbor_smart_truth(((getglobalvar("crd") >= 1) or (getglobalvar("crd2") >= 1))) then
				do
					drawstring(125, 100, 4, "continue")
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 600)) and (time <= (getglobalvar("elapsed_time") + 999)))) then
						do
							drawstring(155, 120, 3, "9")
						end
					end
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 1000)) and (time <= (getglobalvar("elapsed_time") + 1399)))) then
						do
							drawstring(155, 120, 3, "8")
						end
					end
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 1400)) and (time <= (getglobalvar("elapsed_time") + 1799)))) then
						do
							drawstring(155, 120, 3, "7")
						end
					end
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 1800)) and (time <= (getglobalvar("elapsed_time") + 2099)))) then
						do
							drawstring(155, 120, 3, "6")
						end
					end
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 2100)) and (time <= (getglobalvar("elapsed_time") + 2399)))) then
						do
							drawstring(155, 120, 3, "5")
						end
					end
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 2400)) and (time <= (getglobalvar("elapsed_time") + 2699)))) then
						do
							drawstring(155, 120, 3, "4")
						end
					end
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 2700)) and (time <= (getglobalvar("elapsed_time") + 2999)))) then
						do
							drawstring(155, 120, 4, "3")
						end
					end
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 3000)) and (time <= (getglobalvar("elapsed_time") + 3299)))) then
						do
							drawstring(155, 120, 4, "2")
						end
					end
					if __openbor_smart_truth(((time >= (getglobalvar("elapsed_time") + 3300)) and (time <= (getglobalvar("elapsed_time") + 3599)))) then
						do
							drawstring(155, 120, 4, "1")
						end
					end
					if __openbor_smart_truth((time >= (getglobalvar("elapsed_time") + 3600))) then
						do
							drawstring(155, 120, 4, "0")
						end
					end
					if __openbor_smart_truth((time >= (getglobalvar("elapsed_time") + 4200))) then
						do
							jumptobranch("end", 1)
						end
					end
				end
			end
		end
	end
end
