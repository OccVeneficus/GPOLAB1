#pragma once
#include "User.h"
#include "Post.h"

class PaidUser : public User
{
private:
	Post* _posts;
	int _postsCount;

public:
	// TODO: реализацию из h-файла
	PaidUser(int id, string login, string password, Post* posts, int postsCount) :
		User(id, login, password)
	{
		SetPosts(posts, postsCount);
	}
	PaidUser(int id, string login, string password) : User(id, login, password)
	{
		SetPosts(nullptr, 0);
	}

	void SetPosts(Post* posts, int postsCounter);

	Post* GetPosts();
	int GetPostsCount();

	~PaidUser();
};

