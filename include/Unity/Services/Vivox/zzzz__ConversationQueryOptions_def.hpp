#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConversationQueryOptions)
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ConversationQueryOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ConversationQueryOptions);
// Type: Unity.Services.Vivox::ConversationQueryOptions
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ConversationQueryOptions*
class CORDL_TYPE ConversationQueryOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CutoffTime, put = set_CutoffTime))::System::Nullable_1<::System::DateTime> CutoffTime;

  __declspec(property(get = get_PageCursor, put = set_PageCursor)) int32_t PageCursor;

  __declspec(property(get = get_PageSize, put = set_PageSize)) int32_t PageSize;

  /// @brief Field <CutoffTime>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__CutoffTime_k__BackingField,
                      put = __cordl_internal_set__CutoffTime_k__BackingField))::System::Nullable_1<::System::DateTime> _CutoffTime_k__BackingField;

  /// @brief Field <PageCursor>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__PageCursor_k__BackingField, put = __cordl_internal_set__PageCursor_k__BackingField)) int32_t _PageCursor_k__BackingField;

  /// @brief Field <PageSize>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__PageSize_k__BackingField, put = __cordl_internal_set__PageSize_k__BackingField)) int32_t _PageSize_k__BackingField;

  static inline ::Unity::Services::Vivox::ConversationQueryOptions* New_ctor();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__CutoffTime_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__CutoffTime_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__PageCursor_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__PageCursor_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__PageSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__PageSize_k__BackingField();

  constexpr void __cordl_internal_set__CutoffTime_k__BackingField(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__PageCursor_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__PageSize_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x1c17844, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CutoffTime, addr 0x1c17820, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_CutoffTime();

  /// @brief Method get_PageCursor, addr 0x1c17810, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PageCursor();

  /// @brief Method get_PageSize, addr 0x1c17834, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PageSize();

  /// @brief Method set_CutoffTime, addr 0x1c1782c, size 0x8, virtual false, abstract: false, final false
  inline void set_CutoffTime(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method set_PageCursor, addr 0x1c17818, size 0x8, virtual false, abstract: false, final false
  inline void set_PageCursor(int32_t value);

  /// @brief Method set_PageSize, addr 0x1c1783c, size 0x8, virtual false, abstract: false, final false
  inline void set_PageSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConversationQueryOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConversationQueryOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConversationQueryOptions(ConversationQueryOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConversationQueryOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConversationQueryOptions(ConversationQueryOptions const&) = delete;

  /// @brief Field <PageCursor>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____PageCursor_k__BackingField;

  /// @brief Field <CutoffTime>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____CutoffTime_k__BackingField;

  /// @brief Field <PageSize>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____PageSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ConversationQueryOptions, 0x30>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ConversationQueryOptions, ____PageCursor_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ConversationQueryOptions, ____CutoffTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ConversationQueryOptions, ____PageSize_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ConversationQueryOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ConversationQueryOptions*, "Unity.Services.Vivox", "ConversationQueryOptions");
