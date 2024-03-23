#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArchiveQueryResult)
namespace Unity::Services::Vivox {
class IArchiveQueryResult;
}
namespace Unity::Services::Vivox {
class vx_evt_account_archive_query_end_t;
}
namespace Unity::Services::Vivox {
class vx_evt_session_archive_query_end_t;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class ArchiveQueryResult;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::ArchiveQueryResult);
// Type: Unity.Services.Vivox::ArchiveQueryResult
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::ArchiveQueryResult*
class CORDL_TYPE ArchiveQueryResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FirstId, put = set_FirstId))::StringW FirstId;

  __declspec(property(get = get_FirstIndex, put = set_FirstIndex)) uint32_t FirstIndex;

  __declspec(property(get = get_LastId, put = set_LastId))::StringW LastId;

  __declspec(property(get = get_QueryId, put = set_QueryId))::StringW QueryId;

  __declspec(property(get = get_ReturnCode, put = set_ReturnCode)) int32_t ReturnCode;

  __declspec(property(get = get_Running, put = set_Running)) bool Running;

  __declspec(property(get = get_StatusCode, put = set_StatusCode)) int32_t StatusCode;

  __declspec(property(get = get_TotalCount, put = set_TotalCount)) uint32_t TotalCount;

  /// @brief Field <FirstId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__FirstId_k__BackingField, put = __cordl_internal_set__FirstId_k__BackingField))::StringW _FirstId_k__BackingField;

  /// @brief Field <FirstIndex>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__FirstIndex_k__BackingField, put = __cordl_internal_set__FirstIndex_k__BackingField)) uint32_t _FirstIndex_k__BackingField;

  /// @brief Field <LastId>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__LastId_k__BackingField, put = __cordl_internal_set__LastId_k__BackingField))::StringW _LastId_k__BackingField;

  /// @brief Field <QueryId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__QueryId_k__BackingField, put = __cordl_internal_set__QueryId_k__BackingField))::StringW _QueryId_k__BackingField;

  /// @brief Field <ReturnCode>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__ReturnCode_k__BackingField, put = __cordl_internal_set__ReturnCode_k__BackingField)) int32_t _ReturnCode_k__BackingField;

  /// @brief Field <Running>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__Running_k__BackingField, put = __cordl_internal_set__Running_k__BackingField)) bool _Running_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__StatusCode_k__BackingField, put = __cordl_internal_set__StatusCode_k__BackingField)) int32_t _StatusCode_k__BackingField;

  /// @brief Field <TotalCount>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__TotalCount_k__BackingField, put = __cordl_internal_set__TotalCount_k__BackingField)) uint32_t _TotalCount_k__BackingField;

  /// @brief Convert operator to "::Unity::Services::Vivox::IArchiveQueryResult"
  constexpr operator ::Unity::Services::Vivox::IArchiveQueryResult*() noexcept;

  static inline ::Unity::Services::Vivox::ArchiveQueryResult* New_ctor();

  static inline ::Unity::Services::Vivox::ArchiveQueryResult* New_ctor(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* evt);

  static inline ::Unity::Services::Vivox::ArchiveQueryResult* New_ctor(::Unity::Services::Vivox::vx_evt_session_archive_query_end_t* evt);

  static inline ::Unity::Services::Vivox::ArchiveQueryResult* New_ctor(::StringW queryId);

  constexpr ::StringW const& __cordl_internal_get__FirstId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FirstId_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__FirstIndex_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__FirstIndex_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__LastId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__LastId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__QueryId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__QueryId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__ReturnCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ReturnCode_k__BackingField();

  constexpr bool const& __cordl_internal_get__Running_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Running_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__StatusCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__StatusCode_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__TotalCount_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__TotalCount_k__BackingField();

  constexpr void __cordl_internal_set__FirstId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__FirstIndex_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__LastId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__QueryId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ReturnCode_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__Running_k__BackingField(bool value);

  constexpr void __cordl_internal_set__StatusCode_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__TotalCount_k__BackingField(uint32_t value);

  /// @brief Method .ctor, addr 0x2fc7d30, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2fc7eb0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::vx_evt_account_archive_query_end_t* evt);

  /// @brief Method .ctor, addr 0x2fc7e10, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::vx_evt_session_archive_query_end_t* evt);

  /// @brief Method .ctor, addr 0x2fc7d98, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW queryId);

  /// @brief Method get_FirstId, addr 0x2fc7cdc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_FirstId();

  /// @brief Method get_FirstIndex, addr 0x2fc7cfc, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_FirstIndex();

  /// @brief Method get_LastId, addr 0x2fc7cec, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_LastId();

  /// @brief Method get_QueryId, addr 0x2fc7cac, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_QueryId();

  /// @brief Method get_ReturnCode, addr 0x2fc7cbc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_ReturnCode();

  /// @brief Method get_Running, addr 0x2fc7d1c, size 0x8, virtual true, abstract: false, final true
  inline bool get_Running();

  /// @brief Method get_StatusCode, addr 0x2fc7ccc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_StatusCode();

  /// @brief Method get_TotalCount, addr 0x2fc7d0c, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_TotalCount();

  /// @brief Convert to "::Unity::Services::Vivox::IArchiveQueryResult"
  constexpr ::Unity::Services::Vivox::IArchiveQueryResult* i___Unity__Services__Vivox__IArchiveQueryResult() noexcept;

  /// @brief Method set_FirstId, addr 0x2fc7ce4, size 0x8, virtual false, abstract: false, final false
  inline void set_FirstId(::StringW value);

  /// @brief Method set_FirstIndex, addr 0x2fc7d04, size 0x8, virtual false, abstract: false, final false
  inline void set_FirstIndex(uint32_t value);

  /// @brief Method set_LastId, addr 0x2fc7cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_LastId(::StringW value);

  /// @brief Method set_QueryId, addr 0x2fc7cb4, size 0x8, virtual false, abstract: false, final false
  inline void set_QueryId(::StringW value);

  /// @brief Method set_ReturnCode, addr 0x2fc7cc4, size 0x8, virtual false, abstract: false, final false
  inline void set_ReturnCode(int32_t value);

  /// @brief Method set_Running, addr 0x2fc7d24, size 0xc, virtual false, abstract: false, final false
  inline void set_Running(bool value);

  /// @brief Method set_StatusCode, addr 0x2fc7cd4, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusCode(int32_t value);

  /// @brief Method set_TotalCount, addr 0x2fc7d14, size 0x8, virtual false, abstract: false, final false
  inline void set_TotalCount(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArchiveQueryResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArchiveQueryResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArchiveQueryResult(ArchiveQueryResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArchiveQueryResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArchiveQueryResult(ArchiveQueryResult const&) = delete;

  /// @brief Field <QueryId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____QueryId_k__BackingField;

  /// @brief Field <ReturnCode>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____ReturnCode_k__BackingField;

  /// @brief Field <StatusCode>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____StatusCode_k__BackingField;

  /// @brief Field <FirstId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____FirstId_k__BackingField;

  /// @brief Field <LastId>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____LastId_k__BackingField;

  /// @brief Field <FirstIndex>k__BackingField, offset: 0x30, size: 0x4, def value: None
  uint32_t ____FirstIndex_k__BackingField;

  /// @brief Field <TotalCount>k__BackingField, offset: 0x34, size: 0x4, def value: None
  uint32_t ____TotalCount_k__BackingField;

  /// @brief Field <Running>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____Running_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ArchiveQueryResult, 0x40>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ArchiveQueryResult, ____QueryId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ArchiveQueryResult, ____ReturnCode_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ArchiveQueryResult, ____StatusCode_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ArchiveQueryResult, ____FirstId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ArchiveQueryResult, ____LastId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ArchiveQueryResult, ____FirstIndex_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ArchiveQueryResult, ____TotalCount_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ArchiveQueryResult, ____Running_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::ArchiveQueryResult);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ArchiveQueryResult*, "Unity.Services.Vivox", "ArchiveQueryResult");
