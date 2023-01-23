namespace App
{
  namespace UI
  {
    class Billboard
    {
    protected:
      std::string _title;

    public:
      Billboard()
      {
        _title = "";
      }
      Billboard(const Billboard &billboard)
      {
        _title = billboard._title;
      }
      Billboard(std::string title) : _title{title}
      {
      }
      const std::string getTitle()
      {
        std::cout << "This billboard has title: " << _title;
        return _title;
      }
      const void setTitle(std::string title = "")
      {
        std::cout << "you have set title name: " << title << "\n";
        _title = title;
      }
    };

  }
  namespace Data
  {
    std::string title{"I AM AMAZING"};
  }
  static void Init()
  {
    using namespace UI;
    Billboard b;
    b.setTitle(Data::title);
    b.getTitle();
  };
}