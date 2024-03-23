#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IArchiveQueryResult)
// Forward declare root types
namespace Unity::Services::Vivox {
class IArchiveQueryResult;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::IArchiveQueryResult);
// Type: Unity.Services.Vivox::IArchiveQueryResult
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IArchiveQueryResult*
class CORDL_TYPE IArchiveQueryResult {
public:
  // Declarations
  __declspec(property(get = get_FirstId))::StringW FirstId;

  __declspec(property(get = get_FirstIndex)) uint32_t FirstIndex;

  __declspec(property(get = get_LastId))::StringW LastId;

  __declspec(property(get = get_QueryId))::StringW QueryId;

  __declspec(property(get = get_ReturnCode)) int32_t ReturnCode;

  __declspec(property(get = get_Running)) bool Running;

  __declspec(property(get = get_StatusCode)) int32_t StatusCode;

  __declspec(property(get = get_TotalCount)) uint32_t TotalCount;

  /// @brief Method get_FirstId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_FirstId();

  /// @brief Method get_FirstIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_FirstIndex();

  /// @brief Method get_LastId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_LastId();

  /// @brief Method get_QueryId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_QueryId();

  /// @brief Method get_ReturnCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ReturnCode();

  /// @brief Method get_Running, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_Running();

  /// @brief Method get_StatusCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_StatusCode();

  /// @brief Method get_TotalCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint32_t get_TotalCount();

  // Ctor Parameters [CppParam { name: "", ty: "IArchiveQueryResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IArchiveQueryResult(IArchiveQueryResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IArchiveQueryResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IArchiveQueryResult(IArchiveQueryResult const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::IArchiveQueryResult);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::IArchiveQueryResult*, "Unity.Services.Vivox", "IArchiveQueryResult");
