#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(PreRequestEventArgs)
namespace Amazon::Runtime {
class AmazonWebServiceRequest;
}
// Forward declare root types
namespace Amazon::Runtime {
class PreRequestEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::PreRequestEventArgs);
// Type: Amazon.Runtime::PreRequestEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::PreRequestEventArgs*
class CORDL_TYPE PreRequestEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Request, put = set_Request))::Amazon::Runtime::AmazonWebServiceRequest* Request;

  /// @brief Field <Request>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Request_k__BackingField, put = __cordl_internal_set__Request_k__BackingField))::Amazon::Runtime::AmazonWebServiceRequest* _Request_k__BackingField;

  /// @brief Method Create, addr 0x20202d0, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::PreRequestEventArgs* Create(::Amazon::Runtime::AmazonWebServiceRequest* request);

  static inline ::Amazon::Runtime::PreRequestEventArgs* New_ctor();

  constexpr ::Amazon::Runtime::AmazonWebServiceRequest*& __cordl_internal_get__Request_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceRequest*> const& __cordl_internal_get__Request_k__BackingField() const;

  constexpr void __cordl_internal_set__Request_k__BackingField(::Amazon::Runtime::AmazonWebServiceRequest* value);

  /// @brief Method .ctor, addr 0x2020268, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Request, addr 0x20202c0, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::AmazonWebServiceRequest* get_Request();

  /// @brief Method set_Request, addr 0x20202c8, size 0x8, virtual false, abstract: false, final false
  inline void set_Request(::Amazon::Runtime::AmazonWebServiceRequest* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreRequestEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreRequestEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreRequestEventArgs(PreRequestEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreRequestEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreRequestEventArgs(PreRequestEventArgs const&) = delete;

  /// @brief Field <Request>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Runtime::AmazonWebServiceRequest* ____Request_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::PreRequestEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::PreRequestEventArgs, ____Request_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::PreRequestEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::PreRequestEventArgs*, "Amazon.Runtime", "PreRequestEventArgs");
