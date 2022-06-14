- [1. Object](#1-object)
  - [1.1. Health](#11-health)
  - [1.2. Expert](#12-expert)
  - [1.3. Climbing](#13-climbing)
  - [1.4. Bodybuilding](#14-bodybuilding)
  - [1.5. Language](#15-language)
- [2. Algorithm](#2-algorithm)
- [3. Architect](#3-architect)
  - [3.1. Object-Oriented](#31-object-oriented)
  - [3.2. Object-Oriented Principles](#32-object-oriented-principles)
  - [3.3. Object-Oriented Development](#33-object-oriented-development)
  - [3.4. An Introduction to UML](#34-an-introduction-to-uml)
  - [3.5. Use Case Diagram](#35-use-case-diagram)
- [4. Abbreviation](#4-abbreviation)
- [5. Code](#5-code)
  - [5.1. Python](#51-python)
  - [5.2. C++](#52-c)
  - [5.3. Java script](#53-java-script)
- [6. SELF branding](#6-self-branding)
  - [6.1. Tistory](#61-tistory)
  - [6.2. Naver Blog](#62-naver-blog)
  - [6.3. Instagram](#63-instagram)
- [7. Book Report 讀後感](#7-book-report-讀後感)
- [8. Son](#8-son)
- [9. Reference](#9-reference)

# 1. Object

**The first half of the 2022 Object**

## 1.1. Health

- Streching
- Exercise

## 1.2. Expert

- 2022.06 ~
  - 2022.06.04

## 1.3. Climbing

- Red Climber

-

## 1.4. Bodybuilding

- 15%
- 39kg

## 1.5. Language

- Speaking

# 2. Algorithm

# 3. Architect

## 3.1. Object-Oriented

□ 학습목표 : 객체지향 (Object-Oriented)을 정의할 수 있다.

## 3.2. Object-Oriented Principles

□ 학습목표 : 객체지향 Principles을 이해하고 적용할 수 있다.

## 3.3. Object-Oriented Development

□ 학습목표 :

- ‘소프트웨어 개발’을 정의할 수 있다.
- OOAD 와 SASD의 차이점을 구분할 수 있다.
- 다양한 소프트웨어 개발 방법론/프로세스를 구분하고 정리할 수 있다.

## 3.4. An Introduction to UML

□ 학습목표 : UML 2.0을 구성하는 13개 다이어그램들의 목적을 이해할 수 있다.

Quiz1 -
OOP는 소프트웨어 개발 방법론 X - UP가 방법론
소프트웨어 개발 프로세스임

Quiz2 -
RISK

- Architecture
- Client -  양이 더 적다, RISK가 더 적은것은 아님
Use cases는 refinement되면서 모든 단계에서 중요하게 사용됨

- UML의 사용처
  - Visualizing
  - Specifing
  - Constructing
  - Documenting arifacts

Combine...

- Data Modeling
- Business Modeling
- Object Modeling
- Component Modeling

4-layer metamodel architecture
instance -> model -> metal model -> meta-meta model

Grammar

- syntax
- semantics

UML은 Semantics를 자기 언어로 정의

**|** MOF hierarchy

| Layer    | Detail                | Applied at         |
| :------- | :-------------------- | :----------------- |
| Layer M3 | Meta-meta model layer | The MOF model      |
| Layer M2 | Meta model layer      | The UML meta model |
| Layer M1 | Model layer           | The UML model      |
| Layer M0 | Information layer     | The Application    |

UML 2.0 Diagrams

- Diagram
  - Structure Diagram
    - **Class Diagram**
    - Composite Structure Diagram
    - Component Diagram
    - Deployment Diagram
    - Object Diagram
    - Package Diagram
    - ---
  - Behaviour Diagram
    - Activity Diagram
    - Interaction Diagram
      - **Sequence Diagram**
      - Communication Diagram
      - Interaction Overview Diagram
      - Timing Diagram
    - **Use Case Diagram**
    - State Machine Diagram

1. Use Case Diagram
   1. use cases와 actors의 이름과 관계를 설명
      1. use case : 성공 / 실패 시나리오의 집합. **시나리오**는 ACTOR가 해당 시스템의 목표를 달성하는 방법을 기술.
      2. Actor : something with behavior
2. Class Diagram
   1. Shows
      1. system의 classes
      2. their inter-relationships
      3. operations
      4. attirbutes of the classes
   2. Domain model
   3. Design class diagram
   4. 1..*란 1 ~* 개
3. Object Diagram
   1. 현실의 objcts나 관계를 표현하는데 유용하다
   2. Class Diagram -> Object Diagram (Obj 실제 개수 특정가능할 때)

4. Package Diagram
   1. classes의 group
   2. package : collection of logically related UML elements
   3. Logical architecture
   4. Package > Class > object

**|** 왼쪽 위 작은 네모 : package
네모 대문자 : class
네모 소문자 : object

5. Component Diagram
   1. compents들이 엮여 있어 더 큰 components 혹은 software systems 구성
   2. 임의의 복잡한 시스템들을 서로간의 의동성과 구조를 설명

6. Composite Sturcture Diagram
   1. Component Diagram을 hierarchy하게 그린 것, 보통 같이 그림
   2. run-time instances
   3. 내부 구조의 components를 보여줌

7. Deployment Diagram
   1. run-time configuration
   2. 실제 구동될 수 있도록, OS가 있다면 OS도 표현

8. Sequence Diagram
   1. obj들의 collaboration, 시간 순서대로
   2. obj:Class (:Class - Anonymous)
   3. system이 복잡하고 scenario가 길면 파악하기 어려움 (사이즈가 쉽게 늘어남)

9. Communication Diagram (= collaboration Diagram)
   1. use case의 dynamic behavior 기술
   2. 설명, 교과서, 시나리오 설명

10. Timing Diagram
    1. 일정 시간동안의 behavior를 기술
    2. sequence diagram의 special form
    3. Horizontal : lifelines / Veritcal : separate compartments

11. Interaction Overview Diagram
    1. 각각의 scenario를 합쳐 놓은 flow diagram
    2. flow chart 기반
    3. 시스템 테스트 케이스 만들때 사용

12. State (Statechart) Diagram
    1. Originated form the Statecharts formalism
    2. FSM automata
    3. Optional
    4. Top-down hierarchy?
    5. event 기반(state -> state)

13. Activity Diagram
    1. Control flow diagram과 비슷
    2. state에서 일을 함

## 3.5. Use Case Diagram

□ 학습목표 : Use Case 를 통해 기능요구사항을 작성하고,  
Use Case Diagram을 작성할 수 있다.

Quiz 1 - 1 X 2 O OOAD unified language가 UML  
Quiz 2 - Class / Use case / Sequence - communication

Use Cases

- Text scenario
- Summary note
- Use cases는 OOAD에서만 쓰이는 것이 아님
- brief -> casual -> fully dressed
- System context diagram (external actor로 확장 가능)
- 모든 use cases의 요약으로 쓰인다

**Primary Actor / Supporting Actor / Offstage Actor**

- Seconary Actor는 시스템이 확장되면서 boundary 안에 들어가면 Primary로 될 수 있다.

**Brief**

- 2~3줄의 summary

**Casual** (OOA)

- Informal paragraph format
- 여러개의 paragraph
  - Main Success Scenario
  - Alternate Scenarios (**Extension**)
  - Exceptional Scenario (다시 돌아오지 않음)  
  
**Fully Dressed** (OOD -> OOI)

- Use Case Name
- Scope
- Level
- Primary Actor
- Stakeholders and Interests
- Preconditions
- Success Gurantee
- Main Success Scenario
- Extensions
- Special Requirements
- Technology and Data Variantions List
- Frequnecy of Occurence
- Miscellaneous

Use case guideline :

1. Write in an Essential Style
   - user intentions
   - system responsibilities
   - UI free style
   - flexible
2. Block-Box Use Cases
   - Don't describe the internal working

Quiz1 3  
Quiz2 1

Homework1  
Homework2  

Typical Courses of Events

1. 고객이 방문
2. 고객이 주문
3. 고객이 음식을 먹음
4. 고객이 계산함 (팁 포함)
5. 고객이 나감

Alternative Courses of Events

1. 예약을 했을 경우
2. 예약을 하지 않았을 경우
3. 창가쪽에 앉을 경우
4. 테이블의 인원수보다 많은 인원이 앉아야할 경우
5. 추가 반찬을 원할 경우

Exceptional Courses of Events

1. 기다리다가 지쳐 나갈 경우
2. 손님이 음식을 쏟을 경우
3. 손님에게 음식을 쏟을 경우
4. 손님이 계산을 안할 경우

문제 :  
다음 중 Use Cases에 대한 설명으로 옳지 않은 것은?

  1. Functional Requirement로도 사용된다
  2. brief, casual, fully dressed 3가지 형식이 있다
  3. Use Cases Diagram보다 Use Cases 자체가 더 중요하다
  4. Summary note라고도 할 수 있다
  5. Use Cases는 diagram으로도 그릴 수 있다

# 4. Abbreviation

| Word     | Definition                          |
| :------- | :---------------------------------- |
| UP       | Unified Process                     |
| OOAD     | Object Oriented Analysis and Design |
| SRS      | Software Requirement Specification  |
| SRA      | Software Requirement Analysts       |
| STD      | State Transition Diagram            |
| DFD      | Data Flow Diagram                   |
| SA       | Structure Analysis                  |
| UML      | Unified Modeling Language           |
| OOC      | Object Oriented Code                |
| de facto | Actually                            |
| MOF      | Meta Object Facility                |
| DCD      | Design class diagram                |
| FSM      | Finite State Machine                |
| OOI      | Object Oriented Implementation      |
| SRS      | Software Requirement Specification  |

# 5. Code

## 5.1. Python

```
T = int(input())

for _ in range(T):
    if int(input()) == 1:
        cute += 1

if cute > T//2:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")
```

## 5.2. C++

## 5.3. Java script

# 6. SELF branding

- 티타임

    기분 상하지 않게 협업하는 피드백 방법

  - 워라밸 최고. 실리콘밸리라도 20시부터 온라인
  - 스타트업은 비전을 팔아야한다.
  - 실질적인 피드백을 하면 좋겠다
  - SBIT
    - Situation
    - Behavior
    - Impact
    - Tomorrow
  - 실리콘밸리는 4명단위 코드리뷰

- 나한테 맞는 글쓰기 플랫폼은?
- 대중적인 글인가? → 네이버 블로그
- 전문적인 글인가?
- 수익이 목적인가? - 티스토리
- 브랜딩 및 출간이 목적인가? - 브런치

-

## 6.1. Tistory

## 6.2. Naver Blog

## 6.3. Instagram

# 7. Book Report 讀後感

# 8. Son

# 9. Reference

**checklist**

- [ ] Hello
- [ ] Hi
- [ ] Hi
