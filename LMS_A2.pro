#-------------------------------------------------
#
# Project created by QtCreator 2016-10-16T18:51:05
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LMS_A2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    addlibraryitem.cpp \
    user.cpp \
    librarian.cpp \
    librarianinterface.cpp \
    book.cpp \
    issue.cpp \
    issueinterface.cpp \
    issueitem.cpp \
    removeitem.cpp \
    clerk.cpp \
    clerkinterface.cpp \
    dvd.cpp \
    libraryitem.cpp \
    lms.cpp \
    lms_singletonpattern.cpp \
    date.cpp \
    bookonhold.cpp \
    viewstudent.cpp \
    addstudent.cpp \
    searchlibitem.cpp \
    studentinterface.cpp \
    student.cpp \
    renewlibitem.cpp \
    editstudent.cpp \
    returnitem.cpp \
    searchbytitle.cpp \
    searchbyauthor.cpp \
    searchbysubject.cpp \
    link.cpp \
    state.cpp \
    bookonhold_singletonpattern.cpp \
    issueitem_singletonpattern.cpp \
    reference_singletonpattern.cpp \
    available_singletonpattern.cpp \
    available.cpp \
    onhold.cpp \
    reference.cpp \
    issuelibitem.cpp

HEADERS  += mainwindow.h \
    addlibraryitem.h \
    user.h \
    librarian.h \
    librarianinterface.h \
    book.h \
    issue.h \
    issueinterface.h \
    issueitem.h \
    removeitem.h \
    clerk.h \
    clerkinterface.h \
    dvd.h \
    libraryitem.h \
    lms.h \
    lms_singletonpattern.h \
    date.h \
    bookonhold.h \
    viewstudent.h \
    addstudent.h \
    searchlibitem.h \
    studentinterface.h \
    student.h \
    renewlibitem.h \
    editstudent.h \
    returnitem.h \
    searchbytitle.h \
    searchbyauthor.h \
    searchbysubject.h \
    link.h \
    state.h \
    bookonhold_singletonpattern.h \
    issueitem_singletonpattern.h \
    reference_singletonpattern.h \
    available_singletonpattern.h \
    available.h \
    onhold.h \
    reference.h \
    issuelibitem.h

FORMS    += mainwindow.ui \
    addlibraryitem.ui \
    librarianinterface.ui \
    issueinterface.ui \
    issueitem.ui \
    removeitem.ui \
    clerkinterface.ui \
    bookonhold.ui \
    viewstudent.ui \
    addstudent.ui \
    searchlibitem.ui \
    studentinterface.ui \
    renewlibitem.ui \
    editstudent.ui \
    returnitem.ui \
    searchbytitle.ui \
    searchbyauthor.ui \
    searchbysubject.ui
