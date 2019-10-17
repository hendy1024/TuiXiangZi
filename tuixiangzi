
--头文件
enum PushType
{
	EAST = 1,
	SOUTH = 2,
	WEST = 3,
	NORTH = 4,
}

bool CheckCanPush( const int push_type);
bool CheckHasBox(const Posi &pos);
bool CheckHasFinish();
void Push(int push_type);
void ChangeIcon(const Posi &pos, const string &icon_name);
void RecoverRoleIcon();

struct Posi
{
	Posi():x(0), y(0){}
	int		x;
	int 	y;
}

Posi m_role_pos;

std::vector<Posi>	m_target_pos_list;
