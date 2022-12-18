
class user
{
private:
    string username;
    string password;

public:
    user(string us="nothing", string pwd="nothing");
    string toString();
};

/*
class administratorData
{

};

class volunteerData
{

};
*/

class request
{
private:
    string requestID;
    string requestDate;

public:
    request(string reqID, string reqDate);

};

class school
{
private:
    vector <request> requestColl;

public:
    school();
    void regRequest(request newRequest);
};

class schoolHelp
{
private:
    vector <user> userColl;
    vector <school> schoolColl;
public:
    schoolHelp()
    {

    }
    void regSchool(school newSchool);
    void regUser(user newUser);

    string printUser();
};

//getter
class getter : public data
{

};

//setter
void
