#ifndef APPLICATION_H_
#define APPLICATION_H_

namespace Adon
{
	/// Simple Application Interface
	class Application
	{
	public:
		Application();
		virtual bool Open();
		virtual void Close();
		virtual void Run();
		virtual void Exit();
		bool IsOpen() const;
	protected:
		bool isOpen;
	};
}

#endif // !APPLICATION_H_
