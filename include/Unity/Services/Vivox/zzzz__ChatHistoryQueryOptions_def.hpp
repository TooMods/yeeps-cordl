#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ChatHistoryQueryOptions)
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ChatHistoryQueryOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ChatHistoryQueryOptions);
// Type: Unity.Services.Vivox::ChatHistoryQueryOptions
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ChatHistoryQueryOptions*
class CORDL_TYPE ChatHistoryQueryOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PlayerId, put = set_PlayerId))::StringW PlayerId;

  __declspec(property(get = get_SearchText, put = set_SearchText))::StringW SearchText;

  __declspec(property(get = get_TimeEnd, put = set_TimeEnd))::System::Nullable_1<::System::DateTime> TimeEnd;

  __declspec(property(get = get_TimeStart, put = set_TimeStart))::System::Nullable_1<::System::DateTime> TimeStart;

  /// @brief Field <PlayerId>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__PlayerId_k__BackingField, put = __cordl_internal_set__PlayerId_k__BackingField))::StringW _PlayerId_k__BackingField;

  /// @brief Field <SearchText>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__SearchText_k__BackingField, put = __cordl_internal_set__SearchText_k__BackingField))::StringW _SearchText_k__BackingField;

  /// @brief Field <TimeEnd>k__BackingField, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__TimeEnd_k__BackingField, put = __cordl_internal_set__TimeEnd_k__BackingField))::System::Nullable_1<::System::DateTime> _TimeEnd_k__BackingField;

  /// @brief Field <TimeStart>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__TimeStart_k__BackingField, put = __cordl_internal_set__TimeStart_k__BackingField))::System::Nullable_1<::System::DateTime> _TimeStart_k__BackingField;

  static inline ::Unity::Services::Vivox::ChatHistoryQueryOptions* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__PlayerId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PlayerId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__SearchText_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__SearchText_k__BackingField();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__TimeEnd_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__TimeEnd_k__BackingField();

  constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get__TimeStart_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get__TimeStart_k__BackingField();

  constexpr void __cordl_internal_set__PlayerId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__SearchText_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__TimeEnd_k__BackingField(::System::Nullable_1<::System::DateTime> value);

  constexpr void __cordl_internal_set__TimeStart_k__BackingField(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method .ctor, addr 0x1c17808, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PlayerId, addr 0x1c177f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PlayerId();

  /// @brief Method get_SearchText, addr 0x1c177c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SearchText();

  /// @brief Method get_TimeEnd, addr 0x1c177e4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_TimeEnd();

  /// @brief Method get_TimeStart, addr 0x1c177d0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> get_TimeStart();

  /// @brief Method set_PlayerId, addr 0x1c17800, size 0x8, virtual false, abstract: false, final false
  inline void set_PlayerId(::StringW value);

  /// @brief Method set_SearchText, addr 0x1c177c8, size 0x8, virtual false, abstract: false, final false
  inline void set_SearchText(::StringW value);

  /// @brief Method set_TimeEnd, addr 0x1c177f0, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeEnd(::System::Nullable_1<::System::DateTime> value);

  /// @brief Method set_TimeStart, addr 0x1c177dc, size 0x8, virtual false, abstract: false, final false
  inline void set_TimeStart(::System::Nullable_1<::System::DateTime> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChatHistoryQueryOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChatHistoryQueryOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChatHistoryQueryOptions(ChatHistoryQueryOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChatHistoryQueryOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChatHistoryQueryOptions(ChatHistoryQueryOptions const&) = delete;

  /// @brief Field <SearchText>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____SearchText_k__BackingField;

  /// @brief Field <TimeStart>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____TimeStart_k__BackingField;

  /// @brief Field <TimeEnd>k__BackingField, offset: 0x28, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> ____TimeEnd_k__BackingField;

  /// @brief Field <PlayerId>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____PlayerId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ChatHistoryQueryOptions, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChatHistoryQueryOptions, ____SearchText_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChatHistoryQueryOptions, ____TimeStart_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChatHistoryQueryOptions, ____TimeEnd_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ChatHistoryQueryOptions, ____PlayerId_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ChatHistoryQueryOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ChatHistoryQueryOptions*, "Unity.Services.Vivox", "ChatHistoryQueryOptions");
