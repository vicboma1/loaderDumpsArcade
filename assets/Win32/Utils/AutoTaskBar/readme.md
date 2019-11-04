# AutoTaskBar -> Animation

```c++
auto *pTaskBar = new AutoTaskBar();

auto state = pTaskBar->getTaskbarState();
if(state == TASKBAR_AUTO_TOP)
  pTaskBar->autoHideTaskbar();

```
