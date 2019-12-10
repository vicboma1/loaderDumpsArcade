# TaskBar

```c++
//File with external configuration
std::unique_ptr properties = std::make_ptr<Properties>();
properties->read();

//Read value
// hidden = 1 | show = 0
auto _taskBar = pproperties->getBoolean("TASKBAR");
std::unique_ptr pshowTask = std::make_ptr<ShowTaskBar>(_taskBar);

//initialize game
if(pshowTask->isHidden())
   pshowTask->hidden());

//close game
if(pshowTask->isHidden())
   pshowTask->show());

```

Refactor: [unique_ptr & make_ptr](https://github.com/vicboma1/loaderDumpsArcade/issues/45)
