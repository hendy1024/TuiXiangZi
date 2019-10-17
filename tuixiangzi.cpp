--cpp文件

bool TuiXiangZi::CheckCanPush( const int push_type)
{
}

bool TuiXiangZi::CheckHasBox(Posi &pos)
{
	
}

bool TuiXiangZi::CheckHasFinish()
{
	
}

void TuiXiangZi::RecoverRoleIcon()
{
	ChangeIcon(m_role_pos, "")
}

void TuiXiangZi::ChangeIcon(const Posi &pos, const string &icon_name)
{
	if(pos.x == -1 || pos.y == -1)
	{
		return;
	}
}

void TuiXiangZi::Push(int push_type)
{
	if(push_type < EAST || push_type > NORTH)
	{
		return;
	}

	if(!CheckCanPush(push_type))
	{
		return;
	}

	string box_icon_name = "周豪头像";
	string role_icon_name = "玩家头像";
	string icon_name = "";	--空格子

	ChangeIcon(m_role_pos);

	switch(push_type)
	{
		case(EAST):
			{
				Posi next_pos = Posi(m_role_pos.x + 1, m_role_pos_y);
				string icon_name,
				if(CheckHasBox(next_pos))
				{
					strcpy(icon_name, sizeof(next_icon_name), box_icon_name);
				}
				ChangeIcon(next_pos + 1, icon_name);
				ChangeIcon(next_pos, role_icon_name);

				m_role_pos = next_pos;
			}
			break;
		case(SOUTH):
			{
				……
			}
			break;
		case(WEST):
			{
				……
			}
			break;
		case(NORTH):
			{
				……
			}
			break;
		default::
		break;
	}



	if(CheckHasFinish())
	{
		print("周豪掉屎里了"	);
		return; 
	}
}
