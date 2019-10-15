# TaskBar



```c++
//File with external configuration
Properties *properties = new Properties();
properties->read();

//Read value
// hidden = 1 | show = 0
auto _taskBar = pproperties->getBoolean("TASKBAR");
ShowTaskBar *pshowTask = new ShowTaskBar(_taskBar);

//initialize game
if(pshowTask->isHidden())
   pshowTask->hidden());

//close game
if(pshowTask->isHidden())
   pshowTask->show());

```
