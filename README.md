# AGE-ASCII-Game-Engine
A comprehensive game engine framework designed to support multiple game implementations such as Flappy Bird and Space Invaders

## Overview

The engine provides the following: 
Object as the base entity for game objects (position, velocity, hitbox, behavior), ObjectManager managing objects via std::unique_ptr , and a publish-subscribe event system (EventManager , Event , EventListener ) supporting CollisionEvent , KeyboardEvent , MouseEvent , and DespawnEvent .

The rendering system uses the Drawing abstract class and DrawingManager singleton (Strategy pattern). Concrete implementations like BirdDrawing and PipeDrawing define visual representations independently. Collision detection uses the Hitbox abstract class with RectangleHitbox and 
CircularHitbox implementations for polymorphic collision detection.

State management follows a State →  WorldState → game world hierarchy using the Template Method pattern. Input handling is abstracted through NcursesController returning InputController with Action variants. The animation system supports framebased animations via Animate , Shape , and Frame classes.

The GameLoop class orchestrates the main game cycle, handling frame timing, input processing, world updates, collision detection, event processing, and rendering. Each game extends WorldState and NcursesView to implement game logic.


## Design Patterns, Architecture, Memory Management

- SOLID principles
- MVC Architecture
- Singleton Pattern
- Strategy Pattern
- Observer Pattern
- Template Method Pattern
- Factory Pattern
- RAII with smart pointers 
