#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InitializationOptions)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Core {
class InitializationOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::InitializationOptions);
// Type: Unity.Services.Core::InitializationOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: false
// CS Name: ::Unity.Services.Core::InitializationOptions*
class CORDL_TYPE InitializationOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Values))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* Values;

  /// @brief Field <Values>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Values_k__BackingField,
                      put = __cordl_internal_set__Values_k__BackingField))::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* _Values_k__BackingField;

  static inline ::Unity::Services::Core::InitializationOptions* New_ctor();

  static inline ::Unity::Services::Core::InitializationOptions* New_ctor(::Unity::Services::Core::InitializationOptions* source);

  static inline ::Unity::Services::Core::InitializationOptions* New_ctor(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* values);

  /// @brief Method SetOption, addr 0x23ba440, size 0xc4, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::InitializationOptions* SetOption(::StringW key, ::StringW value);

  /// @brief Method SetOption, addr 0x23ba15c, size 0xf4, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::InitializationOptions* SetOption(::StringW key, bool value);

  /// @brief Method SetOption, addr 0x23ba344, size 0xfc, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::InitializationOptions* SetOption(::StringW key, float_t value);

  /// @brief Method SetOption, addr 0x23ba250, size 0xf4, virtual false, abstract: false, final false
  inline ::Unity::Services::Core::InitializationOptions* SetOption(::StringW key, int32_t value);

  /// @brief Method TryGetOption, addr 0x23ba0fc, size 0x60, virtual false, abstract: false, final false
  inline bool TryGetOption(::StringW key, ByRef<::StringW> option);

  /// @brief Method TryGetOption, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool TryGetOption(::StringW key, ByRef<T> option);

  /// @brief Method TryGetOption, addr 0x23b9fdc, size 0x60, virtual false, abstract: false, final false
  inline bool TryGetOption(::StringW key, ByRef<bool> option);

  /// @brief Method TryGetOption, addr 0x23ba09c, size 0x60, virtual false, abstract: false, final false
  inline bool TryGetOption(::StringW key, ByRef<float_t> option);

  /// @brief Method TryGetOption, addr 0x23ba03c, size 0x60, virtual false, abstract: false, final false
  inline bool TryGetOption(::StringW key, ByRef<int32_t> option);

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__Values_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*> const& __cordl_internal_get__Values_k__BackingField() const;

  constexpr void __cordl_internal_set__Values_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x23b9ea4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23b9f4c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Core::InitializationOptions* source);

  /// @brief Method .ctor, addr 0x23b9f24, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* values);

  /// @brief Method get_Values, addr 0x23b9e9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* get_Values();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitializationOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitializationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitializationOptions(InitializationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitializationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitializationOptions(InitializationOptions const&) = delete;

  /// @brief Field <Values>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* ____Values_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::InitializationOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::InitializationOptions, ____Values_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Services::Core
NEED_NO_BOX(::Unity::Services::Core::InitializationOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::InitializationOptions*, "Unity.Services.Core", "InitializationOptions");
