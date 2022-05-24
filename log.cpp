#include<iostream>
class Log
{
public:
//log()=delete ,this delete the default constructor
   enum level
   {
       LevelError=0,LevelWarning,LevelInfo
   };
   
private:
   level m_loglevel=LevelInfo;
public:
   void Setlevel(level level)
   {
       m_loglevel = level;
   }
   void Warn(const char* message)
   {
       if(m_loglevel >= LevelWarning)
           std::cout<<"{Warining}:"<<message<<std::endl;

   }
   void Error(const char* message)
   {
       if(m_loglevel >=LevelError )
           std::cout<<"{Error}:"<<message<<std::endl;

   }
   void Info(const char* message)
   {
       if(m_loglevel >= LevelInfo)
           std::cout<<"{Info}:"<<message<<std::endl;

   }
};
int main(){
    Log log;
    log.Setlevel(Log::LevelError);
    log.Warn("Hello");
    log.Error("Hello");
    log.Info("Hello");
    std::cin.get();

}