TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    VIPCustomer.cpp \
    Shop.cpp \
    Product.cpp \
    POffer.cpp \
    PersonalCustomer.cpp \
    Main.cpp \
    Group.cpp \
    Customer.cpp \
    CompanyCustomer.cpp

DISTFILES += \
    AGPstore.pro.user \
    ListProducts.txt \
    ListGroups.txt \
    ListCustomers.txt \
    ClassDiagram1.cd \
    ClassDiagram.cd \
    AGP_Store.vcxproj.filters \
    AGP_Store.vcxproj \
    AGP_Store.rc

HEADERS += \
    VIPCustomer.h \
    Shop.h \
    resource.h \
    Product.h \
    POffer.h \
    PersonalCustomer.h \
    Group.h \
    Customer.h \
    CompanyCustomer.h \
    AGP_Store.aps
