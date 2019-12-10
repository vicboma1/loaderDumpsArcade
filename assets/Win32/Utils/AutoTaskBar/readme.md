# AutoTaskBar -> Animation

```c++
std::unique_ptr *pTaskBar = std::make_ptr<AutoTaskBar>();
or
auto *pTaskBar = make_ptr<AutoTaskBar>();

auto state = pTaskBar->getTaskbarState();
if(state == TASKBAR_AUTO_TOP)
  pTaskBar->autoHideTaskbar();

```

Refactor: [unique_ptr & make_ptr](https://github.com/vicboma1/loaderDumpsArcade/issues/45)
