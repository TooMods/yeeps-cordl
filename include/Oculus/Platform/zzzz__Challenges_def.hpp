#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Challenges)
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
namespace Oculus::Platform::Models {
class ChallengeList;
}
namespace Oculus::Platform::Models {
class Challenge;
}
namespace Oculus::Platform {
class ChallengeOptions;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Challenges;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Challenges);
// Type: Oculus.Platform::Challenges
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::Challenges*
class CORDL_TYPE Challenges : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x19b8c90, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Create(::StringW leaderboardName, ::Oculus::Platform::ChallengeOptions* challengeOptions);

  /// @brief Method DeclineInvite, addr 0x19b8e40, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* DeclineInvite(uint64_t challengeID);

  /// @brief Method Delete, addr 0x19b8fa0, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* Delete(uint64_t challengeID);

  /// @brief Method Get, addr 0x19b9114, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Get(uint64_t challengeID);

  /// @brief Method GetEntries, addr 0x19b9274, size 0x188, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntries(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardFilterType filter,
                                                                                                           ::Oculus::Platform::LeaderboardStartAt startAt);

  /// @brief Method GetEntriesAfterRank, addr 0x19b93fc, size 0x178, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank);

  /// @brief Method GetEntriesByIds, addr 0x19b9574, size 0x19c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetEntriesByIds(uint64_t challengeID, int32_t limit, ::Oculus::Platform::LeaderboardStartAt startAt,
                                                                                                                ::ArrayW<uint64_t, ::Array<uint64_t>*> userIDs);

  /// @brief Method GetList, addr 0x19b9710, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetList(::Oculus::Platform::ChallengeOptions* challengeOptions, int32_t limit);

  /// @brief Method GetNextChallenges, addr 0x19b8998, size 0x17c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetNextChallenges(::Oculus::Platform::Models::ChallengeList* list);

  /// @brief Method GetNextEntries, addr 0x19b86a0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetNextEntries(::Oculus::Platform::Models::ChallengeEntryList* list);

  /// @brief Method GetPreviousChallenges, addr 0x19b8b14, size 0x17c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeList*>* GetPreviousChallenges(::Oculus::Platform::Models::ChallengeList* list);

  /// @brief Method GetPreviousEntries, addr 0x19b881c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ChallengeEntryList*>* GetPreviousEntries(::Oculus::Platform::Models::ChallengeEntryList* list);

  /// @brief Method Join, addr 0x19b98c0, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Join(uint64_t challengeID);

  /// @brief Method Leave, addr 0x19b9a20, size 0x160, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* Leave(uint64_t challengeID);

  /// @brief Method UpdateInfo, addr 0x19b9b80, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Challenge*>* UpdateInfo(uint64_t challengeID, ::Oculus::Platform::ChallengeOptions* challengeOptions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Challenges();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Challenges", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Challenges(Challenges&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Challenges", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Challenges(Challenges const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Challenges, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Challenges);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Challenges*, "Oculus.Platform", "Challenges");
