#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__RequestEventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HeadersRequestEventArgs)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime {
class HeadersRequestEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::HeadersRequestEventArgs);
// Type: Amazon.Runtime::HeadersRequestEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::HeadersRequestEventArgs*
class CORDL_TYPE HeadersRequestEventArgs : public ::Amazon::Runtime::RequestEventArgs {
public:
  // Declarations
  __declspec(property(get = get_Headers, put = set_Headers))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Headers;

  /// @brief Field <Headers>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Headers_k__BackingField,
                      put = __cordl_internal_set__Headers_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* _Headers_k__BackingField;

  /// @brief Method Create, addr 0x2020834, size 0x60, virtual false, abstract: false, final false
  static inline ::Amazon::Runtime::HeadersRequestEventArgs* Create(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  static inline ::Amazon::Runtime::HeadersRequestEventArgs* New_ctor();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*& __cordl_internal_get__Headers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__Headers_k__BackingField() const;

  constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

  /// @brief Method .ctor, addr 0x2020820, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Headers, addr 0x2020824, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_Headers();

  /// @brief Method set_Headers, addr 0x202082c, size 0x8, virtual false, abstract: false, final false
  inline void set_Headers(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeadersRequestEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeadersRequestEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeadersRequestEventArgs(HeadersRequestEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeadersRequestEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeadersRequestEventArgs(HeadersRequestEventArgs const&) = delete;

  /// @brief Field <Headers>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* ____Headers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::HeadersRequestEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::HeadersRequestEventArgs, ____Headers_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::HeadersRequestEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::HeadersRequestEventArgs*, "Amazon.Runtime", "HeadersRequestEventArgs");
