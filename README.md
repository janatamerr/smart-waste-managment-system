# Smart Waste Management System

A digital platform that helps municipalities manage garbage collection efficiently using smart bin sensors, optimized driver routes, and a complaint-handling workflow.

## Overview

Smart bins equipped with fill-level sensors notify a central system when they need emptying. The system generates optimized daily routes for drivers, tracks task completion, and manages complaints from citizens, technicians, and supervisors — keeping the city clean and operations efficient.

## How it works

1. A smart bin's sensor detects it has reached a fill threshold and notifies the system.
2. The system builds daily collection routes and assigns bins to drivers.
3. Drivers log in, view their assigned bins, and confirm once emptied.
4. The system re-checks the sensor reading after confirmation.
5. If a bin is still full, a complaint is auto-generated and routed to a technician via a supervisor.
6. Citizens can also submit complaints directly about broken, full, or unclean bins.
7. False "emptied" confirmations by drivers are logged as penalties.

## Stakeholders

- **Citizens** — report bin issues
- **Drivers** — receive routes, empty bins, confirm completion
- **Technicians** — resolve complaints, submit reports
- **Supervisors** — assign complaints, monitor technician performance

## Contents

- `Phase1_2_3.docx` — System Requirements Specification (SRS) and project phases
- `classdiagram.drawio` — UML class diagram
- `Architectural_Diagram.drawio` — System architecture diagram
- `activity_diagram.drawio` — Activity/workflow diagram
- `unit_tests_tables.docx` — Unit test documentation
- `system.cpp` — Core system implementation (User, Citizen, Driver, SmartBin, Complaint, Route classes)
- `test_system.cpp` — Unit tests for system components
- `test_user.cpp` — Unit tests for user login

## Tech Stack

- C++
- draw.io (diagrams)

## How to Run

```bash
g++ test_system.cpp -o test_system && ./test_system
g++ test_user.cpp -o test_user && ./test_user
```

## Team

- Dina Gamal Mahmoud 
- Nadeen Mohamed Farid
- Jana Mohamed Tamer 
- Menna Allah Mostafa
- Haya Ahmed 
- Reem Mohamed Behairy 
