#include<iostream>
#include<vector>
#include<unordered_map>

std::string getname()
{
    return "Cherno";
}

class Device{};

class devicemanager
{
private:
   std::unordered_map<std::string,std::vector<Device*>>m_Devices;

public:
   const std::unordered_map<std::string,std::vector<Device*>>& GetDevices() const
   {
       return m_Devices;
   }

};

int main()
{
    auto name=getname();
    int a = name.size();



    std::vector<std::string> strings;
    strings.push_back("Apple");
    strings.push_back("Orange");

    for(std::vector<std::string>::iterator it=strings.begin();it!=strings.end();it++)
    {
        std::cout<<*it<<std::endl; //*it is dereferencing to print the content inside it
    }
    //instead of this u can use auto

    for(auto it=strings.begin();it!=strings.end();it++)
    {
        std::cout<<*it<<std::endl; //*it is dereferencing to print the content inside it
    }

    using DeviceMap = std::unordered_map<std::string,std::vector<Device*>>;


    devicemanager dm;
    const DeviceMap& devices = dm.GetDevices();//or use auto
    const auto& devices = dm.GetDevices();





}