#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProcessExecutionResult)
// Forward declare root types
namespace Amazon::Util {
class ProcessExecutionResult;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::ProcessExecutionResult);
// Type: Amazon.Util::ProcessExecutionResult
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::ProcessExecutionResult*
class CORDL_TYPE ProcessExecutionResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ExitCode, put = set_ExitCode)) int32_t ExitCode;

  __declspec(property(get = get_StandardError, put = set_StandardError))::StringW StandardError;

  __declspec(property(get = get_StandardOutput, put = set_StandardOutput))::StringW StandardOutput;

  /// @brief Field <ExitCode>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__ExitCode_k__BackingField, put = __cordl_internal_set__ExitCode_k__BackingField)) int32_t _ExitCode_k__BackingField;

  /// @brief Field <StandardError>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__StandardError_k__BackingField, put = __cordl_internal_set__StandardError_k__BackingField))::StringW _StandardError_k__BackingField;

  /// @brief Field <StandardOutput>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__StandardOutput_k__BackingField, put = __cordl_internal_set__StandardOutput_k__BackingField))::StringW _StandardOutput_k__BackingField;

  static inline ::Amazon::Util::ProcessExecutionResult* New_ctor();

  constexpr int32_t const& __cordl_internal_get__ExitCode_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__ExitCode_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__StandardError_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__StandardError_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__StandardOutput_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__StandardOutput_k__BackingField();

  constexpr void __cordl_internal_set__ExitCode_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__StandardError_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__StandardOutput_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2203574, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ExitCode, addr 0x220b064, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ExitCode();

  /// @brief Method get_StandardError, addr 0x220b084, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StandardError();

  /// @brief Method get_StandardOutput, addr 0x220b074, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_StandardOutput();

  /// @brief Method set_ExitCode, addr 0x220b06c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExitCode(int32_t value);

  /// @brief Method set_StandardError, addr 0x220b08c, size 0x8, virtual false, abstract: false, final false
  inline void set_StandardError(::StringW value);

  /// @brief Method set_StandardOutput, addr 0x220b07c, size 0x8, virtual false, abstract: false, final false
  inline void set_StandardOutput(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessExecutionResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessExecutionResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessExecutionResult(ProcessExecutionResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessExecutionResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessExecutionResult(ProcessExecutionResult const&) = delete;

  /// @brief Field <ExitCode>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____ExitCode_k__BackingField;

  /// @brief Field <StandardOutput>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____StandardOutput_k__BackingField;

  /// @brief Field <StandardError>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____StandardError_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::ProcessExecutionResult, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::ProcessExecutionResult, ____ExitCode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::ProcessExecutionResult, ____StandardOutput_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::ProcessExecutionResult, ____StandardError_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::ProcessExecutionResult);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::ProcessExecutionResult*, "Amazon.Util", "ProcessExecutionResult");
