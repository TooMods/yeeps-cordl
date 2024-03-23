#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__ResponseEventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebServiceResponseEventArgs)
namespace Amazon::Runtime::Internal::Transform {
class IWebResponseData;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
namespace Amazon::Runtime {
class AmazonWebServiceResponse;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
class WebServiceResponseEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::WebServiceResponseEventArgs);
// Type: Amazon.Runtime::WebServiceResponseEventArgs
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::WebServiceResponseEventArgs*
class CORDL_TYPE WebServiceResponseEventArgs : public ::Amazon::Runtime::ResponseEventArgs {
public:
  // Declarations
  __declspec(property(get = get_Endpoint, put = set_Endpoint))::System::Uri* Endpoint;

  __declspec(property(get = get_Parameters, put = set_Parameters))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Parameters;

  __declspec(property(get = get_Request, put = set_Request))::Amazon::Runtime::AmazonWebServiceRequest* Request;

  __declspec(property(get = get_RequestHeaders, put = set_RequestHeaders))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* RequestHeaders;

  __declspec(property(get = get_Response, put = set_Response))::Amazon::Runtime::AmazonWebServiceResponse* Response;

  __declspec(property(get = get_ResponseHeaders, put = set_ResponseHeaders))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ResponseHeaders;

  __declspec(property(get = get_ServiceName, put = set_ServiceName))::StringW ServiceName;

  /// @brief Field <Endpoint>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Endpoint_k__BackingField, put = __cordl_internal_set__Endpoint_k__BackingField))::System::Uri* _Endpoint_k__BackingField;

  /// @brief Field <Parameters>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Parameters_k__BackingField,
                      put = __cordl_internal_set__Parameters_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _Parameters_k__BackingField;

  /// @brief Field <RequestHeaders>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RequestHeaders_k__BackingField,
                      put = __cordl_internal_set__RequestHeaders_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _RequestHeaders_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField))::Amazon::Runtime::AmazonWebServiceRequest* _Request_k__BackingField;

  /// @brief Field <ResponseHeaders>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ResponseHeaders_k__BackingField,
                      put = __cordl_internal_set__ResponseHeaders_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _ResponseHeaders_k__BackingField;

  /// @brief Field <Response>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Response_k__BackingField,
                      put = __cordl_internal_set__Response_k__BackingField))::Amazon::Runtime::AmazonWebServiceResponse* _Response_k__BackingField;

  /// @brief Field <ServiceName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ServiceName_k__BackingField, put = __cordl_internal_set__ServiceName_k__BackingField))::StringW _ServiceName_k__BackingField;

  /// @brief Method Create, addr 0x2020c50, size 0x454, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::WebServiceResponseEventArgs* Create(::Amazon::Runtime::AmazonWebServiceResponse* response, ::Amazon::Runtime::Internal::IRequest* request,
                                                                       ::Amazon::Runtime::Internal::Transform::IWebResponseData* webResponseData);

  static inline ::Amazon::Runtime::WebServiceResponseEventArgs* New_ctor();

  constexpr ::System::Uri*& __cordl_internal_get__Endpoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__Endpoint_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__Parameters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__Parameters_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__RequestHeaders_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__RequestHeaders_k__BackingField() const;

  constexpr ::Amazon::Runtime::AmazonWebServiceRequest*& __cordl_internal_get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceRequest*> const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__ResponseHeaders_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__ResponseHeaders_k__BackingField() const;

  constexpr ::Amazon::Runtime::AmazonWebServiceResponse*& __cordl_internal_get__Response_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceResponse*> const& __cordl_internal_get__Response_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ServiceName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ServiceName_k__BackingField();

  constexpr void __cordl_internal_set__Endpoint_k__BackingField(::System::Uri* value);

  constexpr void __cordl_internal_set__Parameters_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__RequestHeaders_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__Request_k__BackingField(::Amazon::Runtime::AmazonWebServiceRequest* value);

  constexpr void __cordl_internal_set__ResponseHeaders_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__Response_k__BackingField(::Amazon::Runtime::AmazonWebServiceResponse* value);

  constexpr void __cordl_internal_set__ServiceName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2020bdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Endpoint, addr 0x2020c20, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_Endpoint();

  /// @brief Method get_Parameters, addr 0x2020c00, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Parameters();

  /// @brief Method get_Request, addr 0x2020c30, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceRequest* get_Request();

  /// @brief Method get_RequestHeaders, addr 0x2020be0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_RequestHeaders();

  /// @brief Method get_Response, addr 0x2020c40, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceResponse* get_Response();

  /// @brief Method get_ResponseHeaders, addr 0x2020bf0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_ResponseHeaders();

  /// @brief Method get_ServiceName, addr 0x2020c10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ServiceName();

  /// @brief Method set_Endpoint, addr 0x2020c28, size 0x8, virtual false, abstract: false, final false
  inline void set_Endpoint(::System::Uri* value);

  /// @brief Method set_Parameters, addr 0x2020c08, size 0x8, virtual false, abstract: false, final false
  inline void set_Parameters(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Request, addr 0x2020c38, size 0x8, virtual false, abstract: false, final false
  inline void set_Request(::Amazon::Runtime::AmazonWebServiceRequest* value);

  /// @brief Method set_RequestHeaders, addr 0x2020be8, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Response, addr 0x2020c48, size 0x8, virtual false, abstract: false, final false
  inline void set_Response(::Amazon::Runtime::AmazonWebServiceResponse* value);

  /// @brief Method set_ResponseHeaders, addr 0x2020bf8, size 0x8, virtual false, abstract: false, final false
  inline void set_ResponseHeaders(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_ServiceName, addr 0x2020c18, size 0x8, virtual false, abstract: false, final false
  inline void set_ServiceName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebServiceResponseEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebServiceResponseEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebServiceResponseEventArgs(WebServiceResponseEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebServiceResponseEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebServiceResponseEventArgs(WebServiceResponseEventArgs const&) = delete;

  /// @brief Field <RequestHeaders>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____RequestHeaders_k__BackingField;

  /// @brief Field <ResponseHeaders>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____ResponseHeaders_k__BackingField;

  /// @brief Field <Parameters>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____Parameters_k__BackingField;

  /// @brief Field <ServiceName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ServiceName_k__BackingField;

  /// @brief Field <Endpoint>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Uri* ____Endpoint_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::AmazonWebServiceRequest* ____Request_k__BackingField;

  /// @brief Field <Response>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::Amazon::Runtime::AmazonWebServiceResponse* ____Response_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::WebServiceResponseEventArgs, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceResponseEventArgs, ____RequestHeaders_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceResponseEventArgs, ____ResponseHeaders_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceResponseEventArgs, ____Parameters_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceResponseEventArgs, ____ServiceName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceResponseEventArgs, ____Endpoint_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceResponseEventArgs, ____Request_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceResponseEventArgs, ____Response_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::WebServiceResponseEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::WebServiceResponseEventArgs*, "Amazon.Runtime", "WebServiceResponseEventArgs");
