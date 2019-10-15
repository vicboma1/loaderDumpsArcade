# TaskBar



```c++
//File with external configuration
PProperties *pproperties = new Properties();
pproperties->read();

//Read value
// hidden = 1 | show = 0
bool _taskBar = pproperties->getBoolean("TASKBAR");
ShowTaskBar *pshowTask = new ShowTaskBar(_taskBar);

//initialize game
if(pshowTask->isHidden())
   pshowTask->hidden());

//close game
if(pshowTask->isHidden())
   pshowTask->show());

```
