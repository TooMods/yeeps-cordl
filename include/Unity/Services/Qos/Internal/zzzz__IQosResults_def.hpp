#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IQosResults)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace Unity::Services::Core::Internal {
class IServiceComponent;
}
namespace Unity::Services::Qos::Internal {
struct QosResult;
}
// Forward declare root types
namespace Unity::Services::Qos::Internal {
class IQosResults;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Qos::Internal::IQosResults);
// Type: Unity.Services.Qos.Internal::IQosResults
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Qos::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Qos.Internal::IQosResults*
class CORDL_TYPE IQosResults {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept;

  /// @brief Method GetSortedQosResultsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::Unity::Services::Qos::Internal::QosResult>*>*
  GetSortedQosResultsAsync(::StringW service, ::System::Collections::Generic::IList_1<::StringW>* regions);

  /// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
  constexpr ::Unity::Services::Core::Internal::IServiceComponent* i___Unity__Services__Core__Internal__IServiceComponent() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IQosResults", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IQosResults(IQosResults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IQosResults", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IQosResults(IQosResults const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Qos::Internal
NEED_NO_BOX(::Unity::Services::Qos::Internal::IQosResults);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Qos::Internal::IQosResults*, "Unity.Services.Qos.Internal", "IQosResults");
