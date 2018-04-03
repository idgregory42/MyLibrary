#if !defined (INTEGER_H)
#define INTEGER_H


namespace MyLibrary
{
class Integer
{

   private:
      int value;

   public:
      Integer(int val);
      virtual ~Integer();
      int getValue();

};
}

#endif
