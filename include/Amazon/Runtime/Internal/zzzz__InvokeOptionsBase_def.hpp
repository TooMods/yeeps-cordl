#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InvokeOptionsBase)
namespace Amazon::Runtime::Internal::Transform {
template <typename T, typename R> class IMarshaller_2;
}
namespace Amazon::Runtime::Internal::Transform {
class ResponseUnmarshaller;
}
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryDataBase;
}
namespace Amazon::Runtime::Internal {
class EndpointOperationDelegate;
}
namespace Amazon::Runtime::Internal {
class IRequest;
}
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class InvokeOptionsBase;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::InvokeOptionsBase);
// Type: Amazon.Runtime.Internal::InvokeOptionsBase
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::InvokeOptionsBase*
class CORDL_TYPE InvokeOptionsBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EndpointDiscoveryMarshaller,
                      put = set_EndpointDiscoveryMarshaller))::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*,
                                                                                                                   ::Amazon::Runtime::AmazonWebServiceRequest*>* EndpointDiscoveryMarshaller;

  __declspec(property(get = get_EndpointOperation, put = set_EndpointOperation))::Amazon::Runtime::Internal::EndpointOperationDelegate* EndpointOperation;

  __declspec(property(
      get = get_RequestMarshaller,
      put = set_RequestMarshaller))::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* RequestMarshaller;

  __declspec(property(get = get_ResponseUnmarshaller, put = set_ResponseUnmarshaller))::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* ResponseUnmarshaller;

  /// @brief Field _endpointDiscoveryMarshaller, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__endpointDiscoveryMarshaller, put = __cordl_internal_set__endpointDiscoveryMarshaller))::Amazon::Runtime::Internal::Transform::IMarshaller_2<
      ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>* _endpointDiscoveryMarshaller;

  /// @brief Field _endpointOperation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__endpointOperation, put = __cordl_internal_set__endpointOperation))::Amazon::Runtime::Internal::EndpointOperationDelegate* _endpointOperation;

  /// @brief Field _requestMarshaller, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__requestMarshaller,
                      put = __cordl_internal_set__requestMarshaller))::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*,
                                                                                                                           ::Amazon::Runtime::AmazonWebServiceRequest*>* _requestMarshaller;

  /// @brief Field _responseUnmarshaller, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__responseUnmarshaller,
                      put = __cordl_internal_set__responseUnmarshaller))::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* _responseUnmarshaller;

  static inline ::Amazon::Runtime::Internal::InvokeOptionsBase* New_ctor();

  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*&
  __cordl_internal_get__endpointDiscoveryMarshaller();

  constexpr ::cordl_internals::to_const_pointer<
      ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>*> const&
  __cordl_internal_get__endpointDiscoveryMarshaller() const;

  constexpr ::Amazon::Runtime::Internal::EndpointOperationDelegate*& __cordl_internal_get__endpointOperation();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::EndpointOperationDelegate*> const& __cordl_internal_get__endpointOperation() const;

  constexpr ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*& __cordl_internal_get__requestMarshaller();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>*> const&
  __cordl_internal_get__requestMarshaller() const;

  constexpr ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*& __cordl_internal_get__responseUnmarshaller();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller*> const& __cordl_internal_get__responseUnmarshaller() const;

  constexpr void __cordl_internal_set__endpointDiscoveryMarshaller(
      ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>* value);

  constexpr void __cordl_internal_set__endpointOperation(::Amazon::Runtime::Internal::EndpointOperationDelegate* value);

  constexpr void
  __cordl_internal_set__requestMarshaller(::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* value);

  constexpr void __cordl_internal_set__responseUnmarshaller(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* value);

  /// @brief Method .ctor, addr 0x23d9034, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EndpointDiscoveryMarshaller, addr 0x23d905c, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>* get_EndpointDiscoveryMarshaller();

  /// @brief Method get_EndpointOperation, addr 0x23d906c, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::EndpointOperationDelegate* get_EndpointOperation();

  /// @brief Method get_RequestMarshaller, addr 0x23d903c, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* get_RequestMarshaller();

  /// @brief Method get_ResponseUnmarshaller, addr 0x23d904c, size 0x8, virtual true, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* get_ResponseUnmarshaller();

  /// @brief Method set_EndpointDiscoveryMarshaller, addr 0x23d9064, size 0x8, virtual true, abstract: false, final false
  inline void
  set_EndpointDiscoveryMarshaller(::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>* value);

  /// @brief Method set_EndpointOperation, addr 0x23d9074, size 0x8, virtual true, abstract: false, final false
  inline void set_EndpointOperation(::Amazon::Runtime::Internal::EndpointOperationDelegate* value);

  /// @brief Method set_RequestMarshaller, addr 0x23d9044, size 0x8, virtual true, abstract: false, final false
  inline void set_RequestMarshaller(::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* value);

  /// @brief Method set_ResponseUnmarshaller, addr 0x23d9054, size 0x8, virtual true, abstract: false, final false
  inline void set_ResponseUnmarshaller(::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvokeOptionsBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvokeOptionsBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvokeOptionsBase(InvokeOptionsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvokeOptionsBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvokeOptionsBase(InvokeOptionsBase const&) = delete;

  /// @brief Field _requestMarshaller, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::IRequest*, ::Amazon::Runtime::AmazonWebServiceRequest*>* ____requestMarshaller;

  /// @brief Field _responseUnmarshaller, offset: 0x18, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::ResponseUnmarshaller* ____responseUnmarshaller;

  /// @brief Field _endpointDiscoveryMarshaller, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::Transform::IMarshaller_2<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, ::Amazon::Runtime::AmazonWebServiceRequest*>* ____endpointDiscoveryMarshaller;

  /// @brief Field _endpointOperation, offset: 0x28, size: 0x8, def value: None
  ::Amazon::Runtime::Internal::EndpointOperationDelegate* ____endpointOperation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::InvokeOptionsBase, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::InvokeOptionsBase, ____requestMarshaller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::InvokeOptionsBase, ____responseUnmarshaller) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::InvokeOptionsBase, ____endpointDiscoveryMarshaller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::InvokeOptionsBase, ____endpointOperation) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::InvokeOptionsBase);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::InvokeOptionsBase*, "Amazon.Runtime.Internal", "InvokeOptionsBase");
