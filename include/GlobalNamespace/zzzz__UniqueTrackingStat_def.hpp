#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameStat_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UniqueTrackingStat)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class UniqueTrackingStat;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UniqueTrackingStat);
// Type: ::UniqueTrackingStat
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UniqueTrackingStat*
class CORDL_TYPE UniqueTrackingStat : public ::GlobalNamespace::GameStat {
public:
  // Declarations
  /// @brief Field uniqueKeys, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_uniqueKeys, put = __cordl_internal_set_uniqueKeys))::System::Collections::Generic::List_1<::StringW>* uniqueKeys;

  /// @brief Method Append, addr 0x29d2180, size 0xf8, virtual false, abstract: false, final false
  inline void Append(::StringW uniqueKey);

  /// @brief Method GetSerializedPayload, addr 0x29d2278, size 0x80, virtual true, abstract: false, final false
  inline ::StringW GetSerializedPayload();

  static inline ::GlobalNamespace::UniqueTrackingStat* New_ctor();

  /// @brief Method SetSerializedPayload, addr 0x29d22f8, size 0x16c, virtual true, abstract: false, final false
  inline void SetSerializedPayload(::StringW serializedPayload);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_uniqueKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_uniqueKeys() const;

  constexpr void __cordl_internal_set_uniqueKeys(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x29d2464, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniqueTrackingStat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniqueTrackingStat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniqueTrackingStat(UniqueTrackingStat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniqueTrackingStat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniqueTrackingStat(UniqueTrackingStat const&) = delete;

  /// @brief Field uniqueKeys, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___uniqueKeys;

  /// @brief Field uniqueKeySeparator offset 0xffffffff size 0x2
  static constexpr char16_t uniqueKeySeparator{ u'|' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UniqueTrackingStat, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::UniqueTrackingStat, ___uniqueKeys) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UniqueTrackingStat);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UniqueTrackingStat*, "", "UniqueTrackingStat");
