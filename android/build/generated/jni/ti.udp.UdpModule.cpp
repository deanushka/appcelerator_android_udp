/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "ti.udp.UdpModule.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"



#include "ti.udp.SocketProxy.h"

#include "org.appcelerator.kroll.KrollModule.h"

#define TAG "UdpModule"

using namespace v8;

		namespace ti {
		namespace udp {


Persistent<FunctionTemplate> UdpModule::proxyTemplate = Persistent<FunctionTemplate>();
jclass UdpModule::javaClass = NULL;

UdpModule::UdpModule(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void UdpModule::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Udp");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	Local<Object> moduleInstance = proxyConstructor->NewInstance();
	exports->Set(nameSymbol, moduleInstance);
}

void UdpModule::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollModule::dispose();
}

Handle<FunctionTemplate> UdpModule::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("ti/udp/UdpModule");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Udp");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollModule::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<UdpModule>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate);

	// Method bindings --------------------------------------------------------

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------

	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------

// Dynamic property accessors -------------------------------------------------


		} // udp
		} // ti
