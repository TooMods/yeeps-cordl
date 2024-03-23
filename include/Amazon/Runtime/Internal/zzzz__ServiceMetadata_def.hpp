#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServiceMetadata)
namespace Amazon::Runtime::Internal {
class IServiceMetadata;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class ServiceMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::ServiceMetadata);
// Type: Amazon.Runtime.Internal::ServiceMetadata
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::ServiceMetadata*
class CORDL_TYPE ServiceMetadata : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_OperationNameMapping))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* OperationNameMapping;

  __declspec(property(get = get_ServiceId))::StringW ServiceId;

  /// @brief Field <OperationNameMapping>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__OperationNameMapping_k__BackingField,
                      put = __cordl_internal_set__OperationNameMapping_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _OperationNameMapping_k__BackingField;

  /// @brief Field <ServiceId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ServiceId_k__BackingField, put = __cordl_internal_set__ServiceId_k__BackingField))::StringW _ServiceId_k__BackingField;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::IServiceMetadata"
  constexpr operator ::Amazon::Runtime::Internal::IServiceMetadata*() noexcept;

  static inline ::Amazon::Runtime::Internal::ServiceMetadata* New_ctor();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__OperationNameMapping_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__OperationNameMapping_k__BackingField() const;

  constexpr ::StringW const& __cordl_internal_get__ServiceId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ServiceId_k__BackingField();

  constexpr void __cordl_internal_set__OperationNameMapping_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__ServiceId_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x23dbae0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OperationNameMapping, addr 0x23dbad8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_OperationNameMapping();

  /// @brief Method get_ServiceId, addr 0x23dbad0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_ServiceId();

  /// @brief Convert to "::Amazon::Runtime::Internal::IServiceMetadata"
  constexpr ::Amazon::Runtime::Internal::IServiceMetadata* i___Amazon__Runtime__Internal__IServiceMetadata() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServiceMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServiceMetadata(ServiceMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServiceMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServiceMetadata(ServiceMetadata const&) = delete;

  /// @brief Field <ServiceId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ServiceId_k__BackingField;

  /// @brief Field <OperationNameMapping>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____OperationNameMapping_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::ServiceMetadata, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ServiceMetadata, ____ServiceId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::ServiceMetadata, ____OperationNameMapping_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::ServiceMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::ServiceMetadata*, "Amazon.Runtime.Internal", "ServiceMetadata");
