#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EndpointDiscoveryDataBase)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedDictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryDataBase;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointDiscoveryDataBase);
// Type: Amazon.Runtime.Internal::EndpointDiscoveryDataBase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointDiscoveryDataBase*
class CORDL_TYPE EndpointDiscoveryDataBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Identifiers, put = set_Identifiers))::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* Identifiers;

  __declspec(property(get = get_Required, put = set_Required)) bool Required;

  /// @brief Field _identifiers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__identifiers, put = __cordl_internal_set__identifiers))::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* _identifiers;

  /// @brief Field _required, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__required, put = __cordl_internal_set__required)) bool _required;

  static inline ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* New_ctor(bool required);

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__identifiers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__identifiers() const;

  constexpr bool const& __cordl_internal_get__required() const;

  constexpr bool& __cordl_internal_get__required();

  constexpr void __cordl_internal_set__identifiers(::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__required(bool value);

  /// @brief Method .ctor, addr 0x23d6874, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(bool required);

  /// @brief Method get_Identifiers, addr 0x23d6918, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* get_Identifiers();

  /// @brief Method get_Required, addr 0x23d6904, size 0x8, virtual true, abstract: false, final false
  inline bool get_Required();

  /// @brief Method set_Identifiers, addr 0x23d6920, size 0x8, virtual true, abstract: false, final false
  inline void set_Identifiers(::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_Required, addr 0x23d690c, size 0xc, virtual true, abstract: false, final false
  inline void set_Required(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointDiscoveryDataBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryDataBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointDiscoveryDataBase(EndpointDiscoveryDataBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryDataBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointDiscoveryDataBase(EndpointDiscoveryDataBase const&) = delete;

  /// @brief Field _required, offset: 0x10, size: 0x1, def value: None
  bool ____required;

  /// @brief Field _identifiers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::SortedDictionary_2<::StringW, ::StringW>* ____identifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointDiscoveryDataBase, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointDiscoveryDataBase, ____required) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::EndpointDiscoveryDataBase, ____identifiers) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointDiscoveryDataBase);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointDiscoveryDataBase*, "Amazon.Runtime.Internal", "EndpointDiscoveryDataBase");
