namespace App
{
  namespace UI
  {
    class Billboard
    {
    protected:
      std::string _title;
      static int ID;

    public:
      int id;
      Billboard()
      {
        id = ++ID;
        _title = "";
      }
      Billboard(const Billboard &billboard)
      {
        id = billboard.id;
        _title = billboard._title;
      }
      Billboard(std::string title) : _title{title}, id{++ID}
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
    int Billboard::ID = 0;

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
    std::cout << b.id << "\n";
    Billboard n;
    std::cout << n.id << "\n";
    n.setTitle("Constant something data");
    Billboard g{n}; // copying
    std::cout << g.id << "\n";
    g.getTitle();
    n.setTitle();
  };
}