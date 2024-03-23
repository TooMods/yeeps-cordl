#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IServiceMetadata)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class IServiceMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::IServiceMetadata);
// Type: Amazon.Runtime.Internal::IServiceMetadata
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::IServiceMetadata*
class CORDL_TYPE IServiceMetadata {
public:
  // Declarations
  __declspec(property(get = get_OperationNameMapping))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* OperationNameMapping;

  __declspec(property(get = get_ServiceId))::StringW ServiceId;

  /// @brief Method get_OperationNameMapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_OperationNameMapping();

  /// @brief Method get_ServiceId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_ServiceId();

  // Ctor Parameters [CppParam { name: "", ty: "IServiceMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IServiceMetadata(IServiceMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IServiceMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServiceMetadata(IServiceMetadata const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::IServiceMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::IServiceMetadata*, "Amazon.Runtime.Internal", "IServiceMetadata");
