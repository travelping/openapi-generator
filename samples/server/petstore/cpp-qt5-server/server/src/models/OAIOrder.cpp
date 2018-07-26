/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIOrder.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrder::OAIOrder(QString json) {
    this->fromJson(json);
}

OAIOrder::OAIOrder() {
    this->init();
}

OAIOrder::~OAIOrder() {
    
}

void
OAIOrder::init() {
    m_id_isSet = false;
    m_pet_id_isSet = false;
    m_quantity_isSet = false;
    m_ship_date_isSet = false;
    m_status_isSet = false;
    m_complete_isSet = false;
}

void
OAIOrder::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIOrder::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(pet_id, json[QString("petId")]);
    
    ::OpenAPI::fromJsonValue(quantity, json[QString("quantity")]);
    
    ::OpenAPI::fromJsonValue(ship_date, json[QString("shipDate")]);
    
    ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    
    ::OpenAPI::fromJsonValue(complete, json[QString("complete")]);
    
}

QString
OAIOrder::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrder::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_pet_id_isSet){
        obj.insert(QString("petId"), ::OpenAPI::toJsonValue(pet_id));
    }
	if(m_quantity_isSet){
        obj.insert(QString("quantity"), ::OpenAPI::toJsonValue(quantity));
    }
	if(m_ship_date_isSet){
        obj.insert(QString("shipDate"), ::OpenAPI::toJsonValue(ship_date));
    }
	if(m_status_isSet){
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
	if(m_complete_isSet){
        obj.insert(QString("complete"), ::OpenAPI::toJsonValue(complete));
    }
    return obj;
}

qint64
OAIOrder::getId() {
    return id;
}
void
OAIOrder::setId(const qint64 &id) {
    this->id = id;
    this->m_id_isSet = true;
}

qint64
OAIOrder::getPetId() {
    return pet_id;
}
void
OAIOrder::setPetId(const qint64 &pet_id) {
    this->pet_id = pet_id;
    this->m_pet_id_isSet = true;
}

qint32
OAIOrder::getQuantity() {
    return quantity;
}
void
OAIOrder::setQuantity(const qint32 &quantity) {
    this->quantity = quantity;
    this->m_quantity_isSet = true;
}

QDateTime
OAIOrder::getShipDate() {
    return ship_date;
}
void
OAIOrder::setShipDate(const QDateTime &ship_date) {
    this->ship_date = ship_date;
    this->m_ship_date_isSet = true;
}

QString
OAIOrder::getStatus() {
    return status;
}
void
OAIOrder::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool
OAIOrder::isComplete() {
    return complete;
}
void
OAIOrder::setComplete(const bool &complete) {
    this->complete = complete;
    this->m_complete_isSet = true;
}


bool
OAIOrder::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_pet_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_quantity_isSet){ isObjectUpdated = true; break;}
    
        if(m_ship_date_isSet){ isObjectUpdated = true; break;}
    
        if(m_status_isSet){ isObjectUpdated = true; break;}
    
        if(m_complete_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

