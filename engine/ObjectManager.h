#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

#include "Object.h"
#include <vector>
#include <memory>

class Object;

class ObjectManager {
    std::vector<std::unique_ptr<Object>> objects;
    int size;

  public:
    ObjectManager();
    ~ObjectManager() = default;
    
    //unique ptr no copy
    ObjectManager(const ObjectManager&) = delete;
    ObjectManager(ObjectManager&&) noexcept = default;
    ObjectManager& operator=(const ObjectManager&) = delete;
    ObjectManager& operator=(ObjectManager&&) noexcept = default;
    
    Object *operator[](int index);
    void addObject(std::unique_ptr<Object> obj);
    void removeObject(Object *o);
    void removeObject(int index);
    Object *getObject(int index) const;
    int getSize() const;
    void clear();

};

#endif
