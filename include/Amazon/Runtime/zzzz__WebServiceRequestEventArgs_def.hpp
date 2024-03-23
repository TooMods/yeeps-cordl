#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RequestEventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WebServiceRequestEventArgs)
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime::Internal {
class ParameterCollection;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime {
class WebServiceRequestEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::WebServiceRequestEventArgs);
// Type: Amazon.Runtime::WebServiceRequestEventArgs
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::WebServiceRequestEventArgs*
class CORDL_TYPE WebServiceRequestEventArgs : public ::Amazon::Runtime::RequestEventArgs {
public:
  // Declarations
  __declspec(property(get = get_Endpoint, put = set_Endpoint))::System::Uri* Endpoint;

  __declspec(property(get = get_Headers, put = set_Headers))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Headers;

  __declspec(property(get = get_OriginalRequest))::Amazon::Runtime::AmazonWebServiceRequest* OriginalRequest;

  __declspec(property(get = get_ParameterCollection, put = set_ParameterCollection))::Amazon::Runtime::Internal::ParameterCollection* ParameterCollection;

  __declspec(property(get = get_Parameters, put = set_Parameters))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Parameters;

  __declspec(property(get = get_Request, put = set_Request))::Amazon::Runtime::AmazonWebServiceRequest* Request;

  __declspec(property(get = get_ServiceName, put = set_ServiceName))::StringW ServiceName;

  /// @brief Field <Endpoint>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Endpoint_k__BackingField, put = __cordl_internal_set__Endpoint_k__BackingField))::System::Uri* _Endpoint_k__BackingField;

  /// @brief Field <Headers>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Headers_k__BackingField,
                      put = __cordl_internal_set__Headers_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _Headers_k__BackingField;

  /// @brief Field <ParameterCollection>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ParameterCollection_k__BackingField,
                      put = __cordl_internal_set__ParameterCollection_k__BackingField))::Amazon::Runtime::Internal::ParameterCollection* _ParameterCollection_k__BackingField;

  /// @brief Field <Parameters>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Parameters_k__BackingField,
                      put = __cordl_internal_set__Parameters_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _Parameters_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField))::Amazon::Runtime::AmazonWebServiceRequest* _Request_k__BackingField;

  /// @brief Field <ServiceName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ServiceName_k__BackingField, put = __cordl_internal_set__ServiceName_k__BackingField))::StringW _ServiceName_k__BackingField;

  /// @brief Method Create, addr 0x202056c, size 0x2b4, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::WebServiceRequestEventArgs* Create(::Amazon::Runtime::Internal::IRequest* request);

  static inline ::Amazon::Runtime::WebServiceRequestEventArgs* New_ctor();

  constexpr ::System::Uri*& __cordl_internal_get__Endpoint_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get__Endpoint_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__Headers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__Headers_k__BackingField() const;

  constexpr ::Amazon::Runtime::Internal::ParameterCollection*& __cordl_internal_get__ParameterCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::ParameterCollection*> const& __cordl_internal_get__ParameterCollection_k__BackingField() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__Parameters_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__Parameters_k__BackingField() const;

  constexpr ::Amazon::Runtime::AmazonWebServiceRequest*& __cordl_internal_get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceRequest*> const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ServiceName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ServiceName_k__BackingField();

  constexpr void __cordl_internal_set__Endpoint_k__BackingField(::System::Uri* value);

  constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__ParameterCollection_k__BackingField(::Amazon::Runtime::Internal::ParameterCollection* value);

  constexpr void __cordl_internal_set__Parameters_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__Request_k__BackingField(::Amazon::Runtime::AmazonWebServiceRequest* value);

  constexpr void __cordl_internal_set__ServiceName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2020500, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Endpoint, addr 0x2020544, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_Endpoint();

  /// @brief Method get_Headers, addr 0x2020504, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Headers();

  /// @brief Method get_OriginalRequest, addr 0x2020564, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceRequest* get_OriginalRequest();

  /// @brief Method get_ParameterCollection, addr 0x2020524, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::ParameterCollection* get_ParameterCollection();

  /// @brief Method get_Parameters, addr 0x2020514, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Parameters();

  /// @brief Method get_Request, addr 0x2020554, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceRequest* get_Request();

  /// @brief Method get_ServiceName, addr 0x2020534, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ServiceName();

  /// @brief Method set_Endpoint, addr 0x202054c, size 0x8, virtual false, abstract: false, final false
  inline void set_Endpoint(::System::Uri* value);

  /// @brief Method set_Headers, addr 0x202050c, size 0x8, virtual false, abstract: false, final false
  inline void set_Headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_ParameterCollection, addr 0x202052c, size 0x8, virtual false, abstract: false, final false
  inline void set_ParameterCollection(::Amazon::Runtime::Internal::ParameterCollection* value);

  /// @brief Method set_Parameters, addr 0x202051c, size 0x8, virtual false, abstract: false, final false
  inline void set_Parameters(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Request, addr 0x202055c, size 0x8, virtual false, abstract: false, final false
  inline void set_Request(::Amazon::Runtime::AmazonWebServiceRequest* value);

  /// @brief Method set_ServiceName, addr 0x202053c, size 0x8, virtual false, abstract: false, final false
  inline void set_ServiceName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebServiceRequestEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebServiceRequestEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebServiceRequestEventArgs(WebServiceRequestEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebServiceRequestEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebServiceRequestEventArgs(WebServiceRequestEventArgs const&) = delete;

  /// @brief Field <Headers>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____Headers_k__BackingField;

  /// @brief Field <Parameters>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____Parameters_k__BackingField;

  /// @brief Field <ParameterCollection>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::ParameterCollection* ____ParameterCollection_k__BackingField;

  /// @brief Field <ServiceName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____ServiceName_k__BackingField;

  /// @brief Field <Endpoint>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Uri* ____Endpoint_k__BackingField;

  /// @brief Field <Request>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Runtime::AmazonWebServiceRequest* ____Request_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::WebServiceRequestEventArgs, 0x40>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceRequestEventArgs, ____Headers_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceRequestEventArgs, ____Parameters_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceRequestEventArgs, ____ParameterCollection_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceRequestEventArgs, ____ServiceName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceRequestEventArgs, ____Endpoint_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::WebServiceRequestEventArgs, ____Request_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::WebServiceRequestEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::WebServiceRequestEventArgs*, "Amazon.Runtime", "WebServiceRequestEventArgs");
